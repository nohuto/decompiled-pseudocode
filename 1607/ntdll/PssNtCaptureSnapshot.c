/*
 * XREFs of PssNtCaptureSnapshot @ 0x180059160
 * Callers:
 *     WerpGetProcessSnapshot @ 0x180006C68 (WerpGetProcessSnapshot.c)
 * Callees:
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     PssNtFreeSnapshot @ 0x180007C40 (PssNtFreeSnapshot.c)
 *     PsspSampleCounters @ 0x18005962C (PsspSampleCounters.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureProcessInformation @ 0x180088BD8 (PsspCaptureProcessInformation.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A6DC0 (ZwCreateProcessEx.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, void *a2, int a3, unsigned int a4)
{
  void *v5; // r13
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // edi
  _DWORD *v10; // rcx
  int v11; // r12d
  int v12; // r12d
  int v13; // ecx
  int Process; // ebx
  __int64 result; // rax
  NTSTATUS v16; // r15d
  int v17; // esi
  _DWORD *v18; // [rsp+58h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v28[8]; // [rsp+A8h] [rbp+17h] BYREF

  v5 = a2;
  if ( (a3 & 0x3FFE000) != 0 )
    return 3221225485LL;
  v7 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v8 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v23 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *a1;
  v11 = 0;
  v18 = v10;
  if ( !v10 )
  {
    v26 = 1128LL;
    result = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v26, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v18;
    v11 = 1;
    *a1 = v18;
  }
  memset(v10, 0, 0x468uLL);
  *v18 = 1146311504;
  v18[1] = v11;
  v18[2] = a3;
  v12 = PsspCaptureProcessInformation(v18, v5, (unsigned int)a3);
  if ( v12 < 0 )
    goto LABEL_54;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v12 = PsspCaptureAuxiliaryPages(v18, v5, (unsigned int)a3, &v27);
    if ( v12 < 0 )
      goto LABEL_54;
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 135) = v19 - v21;
      *((_QWORD *)v18 + 136) = 1000000 * (v20 - v22) / v8;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v12 = PsspCaptureVaSpaceInformation((__int64)v18, (__int64)v5, a3);
    if ( v12 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v20, &v19);
        *((_QWORD *)v18 + 133) = v19 - v21;
        *((_QWORD *)v18 + 134) = 1000000 * (v20 - v22) / v8;
      }
      goto LABEL_19;
    }
LABEL_54:
    PssNtFreeSnapshot((__int64)v18);
    *a1 = 0LL;
    return (unsigned int)v12;
  }
LABEL_19:
  if ( (a3 & 1) == 0 )
    goto LABEL_34;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  do
  {
    while ( 1 )
    {
      v13 = a3 < 0 ? 0x1000 : 0;
      if ( (v7 & 0x10000000) != 0 )
      {
        v13 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v13 |= 1u;
      }
      Process = ZwCreateProcessEx(v28, 0x2000000LL, 0LL, a2, v13, 0LL, 0LL, 0LL, 0);
      if ( Process >= 0 )
        goto LABEL_30;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_53;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_53:
      PssNtFreeSnapshot((__int64)v18);
      *a1 = 0LL;
      return (unsigned int)Process;
    }
    v7 &= ~0x8000000u;
    Process = -1073741267;
LABEL_30:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v18 + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)v18 + 109) = v28[0];
  if ( v9 )
  {
    PsspSampleCounters(&v20, &v19);
    v8 = v23;
    *((_QWORD *)v18 + 131) = v19 - v21;
    *((_QWORD *)v18 + 132) = 1000000 * (v20 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = a2;
LABEL_34:
  if ( (a3 & 4) == 0 )
  {
LABEL_40:
    if ( (a3 & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation((__int64)v18, (__int64)v5, a3, a4);
      if ( v17 < 0 )
      {
        PssNtFreeSnapshot((__int64)v18);
        *a1 = 0LL;
        return (unsigned int)v17;
      }
      if ( !v9 )
        return 0LL;
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 139) = v19 - v21;
      *((_QWORD *)v18 + 140) = 1000000 * (v20 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 129) = v19 - v24;
      *((_QWORD *)v18 + 130) = 1000000 * (v20 - v25) / v8;
    }
    return 0LL;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v16 = PsspCaptureHandleInformation((__int64)v18, v5, a3);
  if ( v16 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 137) = v19 - v21;
      *((_QWORD *)v18 + 138) = 1000000 * (v20 - v22) / v8;
    }
    goto LABEL_40;
  }
  PssNtFreeSnapshot((__int64)v18);
  *a1 = 0LL;
  return (unsigned int)v16;
}
