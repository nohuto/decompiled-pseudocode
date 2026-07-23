/*
 * XREFs of PiCMEnumerateSubKeys @ 0x140647748
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x140645E3C (PiCMCaptureEnumerateInputData.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
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
  signed int v18; // eax
  char v19[4]; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  unsigned int v22; // [rsp+5Ch] [rbp-14h]
  int v23; // [rsp+60h] [rbp-10h]

  v6 = a6;
  a6 = 0LL;
  v9 = 0;
  PoolWithTag = 0LL;
  *v6 = 0;
  v11 = PiCMCaptureEnumerateInputData(a1, a2, (__int64)a3, (__int64)v19);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( v20 )
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
  a5 = v15 >> 1;
  if ( v21 == 1 )
  {
    v16 = 5;
    goto LABEL_19;
  }
  if ( v21 == 2 )
  {
    v16 = 7;
    goto LABEL_19;
  }
  if ( v21 != 3 )
  {
LABEL_3:
    v12 = -1073741811;
LABEL_4:
    v13 = PiCMReturnBufferResultData(v12, 2 * v9, 0, 0LL, 0, v23, a3, a4, v6);
    goto LABEL_5;
  }
  v16 = 8;
LABEL_19:
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, v16, (__int64 *)&a6);
  v12 = CachedContextBaseKey;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_4;
  v18 = PnpCtxRegEnumKey((unsigned int)CachedContextBaseKey, a6, v22, PoolWithTag, &a5);
  v9 = a5;
  v12 = v18;
LABEL_22:
  if ( v12 < 0 )
    goto LABEL_4;
  v13 = PiCMReturnBufferResultData(v12, 2 * v9, 0, PoolWithTag, 2 * v9, v23, a3, a4, v6);
LABEL_5:
  v11 = v13;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  return (unsigned int)v11;
}
