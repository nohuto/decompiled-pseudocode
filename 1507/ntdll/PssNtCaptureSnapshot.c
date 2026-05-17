/*
 * XREFs of PssNtCaptureSnapshot @ 0x180058F80
 * Callers:
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     PsspCaptureVaSpaceInformation @ 0x18004EB0C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     PsspSampleCounters @ 0x180059428 (PsspSampleCounters.c)
 *     PsspCaptureProcessInformation @ 0x1800595B4 (PsspCaptureProcessInformation.c)
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x180093DD0 (ZwCreateProcessEx.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // edi
  void *v10; // rcx
  int v11; // r12d
  __int64 result; // rax
  int v13; // r12d
  int v14; // ecx
  int Process; // ebx
  int v16; // r15d
  int v17; // esi
  void *v18; // [rsp+58h] [rbp-39h] BYREF
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
    v26 = 1072LL;
    result = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v26, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v18;
    v11 = 1;
    *a1 = v18;
  }
  memset(v10, 0, 0x430uLL);
  *(_DWORD *)v18 = 1146311504;
  *((_DWORD *)v18 + 1) = v11;
  *((_DWORD *)v18 + 2) = a3;
  v13 = PsspCaptureProcessInformation(v18, v5, a3);
  if ( v13 < 0 )
    goto LABEL_31;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages((__int64)v18, v5, a3, &v27);
    if ( v13 < 0 )
      goto LABEL_31;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 128) = v20 - v21;
      *((_QWORD *)v18 + 129) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation((__int64)v18, v5, a3);
    if ( v13 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v19, &v20);
        *((_QWORD *)v18 + 126) = v20 - v21;
        *((_QWORD *)v18 + 127) = 1000000 * (v19 - v22) / v8;
      }
      goto LABEL_21;
    }
LABEL_31:
    PssNtFreeSnapshot(v18);
    *a1 = 0LL;
    return (unsigned int)v13;
  }
LABEL_21:
  if ( (a3 & 1) == 0 )
    goto LABEL_38;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  do
  {
    while ( 1 )
    {
      v14 = (a3 & 0x80000000) != 0 ? 0x1000 : 0;
      if ( (v7 & 0x10000000) != 0 )
      {
        v14 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v14 |= 1u;
      }
      Process = ZwCreateProcessEx(v28, 0x2000000LL, 0LL, a2, v14, 0LL, 0LL, 0LL, 0);
      if ( Process >= 0 )
        goto LABEL_34;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_28;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_28:
      PssNtFreeSnapshot(v18);
      *a1 = 0LL;
      return (unsigned int)Process;
    }
    v7 &= ~0x8000000u;
    Process = -1073741267;
LABEL_34:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v18 + 103) = MEMORY[0x7FFE0014];
  *((_QWORD *)v18 + 102) = v28[0];
  if ( v9 )
  {
    PsspSampleCounters(&v19, &v20);
    v8 = v23;
    *((_QWORD *)v18 + 124) = v20 - v21;
    *((_QWORD *)v18 + 125) = 1000000 * (v19 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = a2;
LABEL_38:
  if ( (a3 & 4) == 0 )
  {
LABEL_44:
    if ( (a3 & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation(v18, v5, a3, a4);
      if ( v17 < 0 )
      {
        PssNtFreeSnapshot(v18);
        *a1 = 0LL;
        return (unsigned int)v17;
      }
      if ( !v9 )
        return 0LL;
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 132) = v20 - v21;
      *((_QWORD *)v18 + 133) = 1000000 * (v19 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 122) = v20 - v24;
      *((_QWORD *)v18 + 123) = 1000000 * (v19 - v25) / v8;
    }
    return 0LL;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v16 = PsspCaptureHandleInformation(v18, v5, a3);
  if ( v16 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)v18 + 130) = v20 - v21;
      *((_QWORD *)v18 + 131) = 1000000 * (v19 - v22) / v8;
    }
    goto LABEL_44;
  }
  PssNtFreeSnapshot(v18);
  *a1 = 0LL;
  return (unsigned int)v16;
}
