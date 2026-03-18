/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140692C44
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x140691700 (PiCMCaptureEnumerateInputData.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(ULONG64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // esi
  PVOID PoolWithTag; // rbx
  int v11; // edi
  signed int v12; // ecx
  int v13; // eax
  unsigned int v15; // edi
  int v16; // edx
  int CachedContextBaseKey; // eax
  char v18[4]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]

  v6 = a6;
  a6 = 0LL;
  v9 = 0;
  PoolWithTag = 0LL;
  *v6 = 0;
  v11 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)v18);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v19 )
    goto LABEL_3;
  if ( !a3 || a4 < 0x14 )
  {
    v12 = -1073741811;
    goto LABEL_22;
  }
  v15 = a4 - 20;
  if ( a4 - 20 < 2 )
    goto LABEL_3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_4;
  }
  v9 = v15 >> 1;
  if ( v20 == 1 )
  {
    v16 = 5;
    goto LABEL_19;
  }
  if ( v20 == 2 )
  {
    v16 = 7;
    goto LABEL_19;
  }
  if ( v20 != 3 )
  {
LABEL_3:
    v12 = -1073741811;
LABEL_4:
    v13 = PiCMReturnBufferResultData(v12, 2 * v9, 0, 0LL, 0, v21, a3, a4, v6);
    goto LABEL_5;
  }
  v16 = 8;
LABEL_19:
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, v16, &a6);
  v12 = CachedContextBaseKey;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v9 = v15 >> 1;
  v12 = PnpCtxRegEnumKey((unsigned int)CachedContextBaseKey, a6);
LABEL_22:
  if ( v12 < 0 )
    goto LABEL_4;
  v13 = PiCMReturnBufferResultData(v12, 2 * v9, 0, PoolWithTag, 2 * v9, v21, a3, a4, v6);
LABEL_5:
  v11 = v13;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  return (unsigned int)v11;
}
