/*
 * XREFs of HvpRecoverData @ 0x1406650F0
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140117218 (RtlMergeBitMaps.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvApplyLegacyLogFile @ 0x140665B70 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x140665D50 (HvApplyLogFile.c)
 */

__int64 __fastcall HvpRecoverData(ULONG_PTR a1, int a2, int a3, char a4, int *a5, int *a6)
{
  void *v6; // r12
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v13; // r13
  ULONG *v14; // r15
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned int v20; // edi
  __int64 v21; // rdx
  void *v22; // rbx
  ULONG v23; // edi
  ULONG v24; // eax
  int v25; // ecx
  int v27; // [rsp+50h] [rbp-29h] BYREF
  void *v28; // [rsp+58h] [rbp-21h]
  _RTL_BITMAP BitMapHeader; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  int v31; // [rsp+78h] [rbp-1h]
  int v32; // [rsp+7Ch] [rbp+3h]
  int v33; // [rsp+D0h] [rbp+57h]
  int v34; // [rsp+D8h] [rbp+5Fh] BYREF
  int v35; // [rsp+E0h] [rbp+67h]
  char v36; // [rsp+E8h] [rbp+6Fh]

  v36 = a4;
  v35 = a3;
  v6 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  v9 = 1;
  P = 0LL;
  v31 = 0;
  v32 = a2;
  v10 = v8 >> 9;
  LODWORD(v28) = v8;
  v11 = ((v8 >> 12) + 3) & 0xFFFFFFFC;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v11, 0x38334D43u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = 2;
    goto LABEL_20;
  }
  memset(PoolWithTag, 0, v11);
  v14 = (ULONG *)(a1 + 72);
  BitMapHeader.SizeOfBitMap = v10;
  BitMapHeader.Buffer = v13;
  RtlMergeBitMaps((__int64)&BitMapHeader, a1 + 72);
  if ( v36 )
  {
    v34 = 0;
    v33 = 1;
    v17 = HvApplyLegacyLogFile(a1);
  }
  else
  {
    v17 = HvApplyLogFile(a1, v35, v15, v16, (__int64)&P, (__int64)&BitMapHeader, (__int64)&v27, (__int64)&v34);
    v33 = v34;
    v34 = v27;
  }
  if ( v17 == -1073741801 )
    goto LABEL_7;
  if ( v17 < 0 )
    goto LABEL_19;
  RtlMergeBitMaps(a1 + 72, (__int64)&BitMapHeader);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (unsigned int)v28 >= v19 )
  {
    if ( (unsigned int)v28 > v19 )
    {
      v23 = v19 >> 9;
      RtlClearBits((PRTL_BITMAP)(a1 + 72), v23, *v14 - v23);
      *v14 = v23;
      *(_DWORD *)(a1 + 96) = v23;
    }
    goto LABEL_16;
  }
  v20 = v19 >> 9;
  LOBYTE(v18) = 1;
  v11 = ((v20 >> 3) + 3) & 0xFFFFFFFC;
  v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v11, v18, 909331779LL);
  if ( v6 )
  {
    LOBYTE(v21) = 1;
    v28 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v11, v21, 909331779LL);
    if ( !v28 )
    {
      v9 = 2;
      goto LABEL_17;
    }
    memset(v6, 0, v11);
    v22 = v28;
    memset(v28, 0, v11);
    BitMapHeader.SizeOfBitMap = v20;
    BitMapHeader.Buffer = (unsigned int *)v6;
    RtlMergeBitMaps((__int64)&BitMapHeader, a1 + 72);
    RtlSetBits(&BitMapHeader, *v14, v20 - *v14);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*(_QWORD *)(a1 + 80), *(unsigned int *)(a1 + 92));
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*(_QWORD *)(a1 + 104), *(unsigned int *)(a1 + 92));
    *(_QWORD *)(a1 + 80) = v6;
    v6 = 0LL;
    *v14 = v20;
    *(_DWORD *)(a1 + 96) = v20;
    *(_QWORD *)(a1 + 104) = v22;
    *(_DWORD *)(a1 + 92) = v11;
LABEL_16:
    v24 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 72));
    v25 = v34;
    v9 = 3;
    *(_DWORD *)(a1 + 88) = v24;
    *a5 = v25;
    *a6 = v33;
LABEL_17:
    if ( v6 )
      (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v6, v11);
    goto LABEL_19;
  }
LABEL_7:
  v9 = 2;
LABEL_19:
  ExFreePoolWithTag(v13, 0);
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
