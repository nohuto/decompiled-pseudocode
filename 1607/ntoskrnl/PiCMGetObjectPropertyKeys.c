/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x140647CD0
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _PnpGetObjectPropertyKeys @ 0x1406DB330 (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  PVOID PoolWithTag; // rsi
  signed int ObjectPropertyKeys; // ebx
  int v11; // edi
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  signed int v14; // eax
  unsigned __int64 v16; // rdx
  char v17[4]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+54h] [rbp-2Ch]
  int v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+C8h] [rbp+48h]

  v23 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  ObjectPropertyKeys = PiCMCaptureObjectInputData(a1, a2, a5, v17);
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_32;
  if ( !v20 || v18 || v21 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_38;
  }
  if ( !a3 || a4 < 0x14 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_29;
  }
  if ( (v19 & 0x7FFF0000) != 0 )
    goto LABEL_8;
  if ( (v19 & 0x80000000) == 0x80000000 )
  {
    v11 = 0;
    if ( (unsigned __int16)v19 < 0xBu )
      v11 = (unsigned __int16)v19;
LABEL_21:
    if ( !v11 )
      goto LABEL_22;
    goto LABEL_23;
  }
  switch ( (unsigned __int16)v19 )
  {
    case 1u:
      v11 = 1;
      goto LABEL_21;
    case 2u:
      v11 = 2;
      break;
    case 3u:
      v11 = 4;
      break;
    case 4u:
      v11 = 3;
      break;
    default:
LABEL_8:
      v11 = 0;
LABEL_22:
      ObjectPropertyKeys = -1073741811;
      break;
  }
LABEL_23:
  if ( ObjectPropertyKeys < 0 )
  {
LABEL_29:
    v14 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v23, 0, 0LL, 0, v22, a3, a4, a6);
    goto LABEL_30;
  }
  v12 = a4 - 20;
  if ( a4 - 20 < 0x14 )
    v12 = 0;
  if ( v12 )
  {
    v13 = v12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectPropertyKeys = -1073741670;
      goto LABEL_29;
    }
    v16 = v13 / 0x14;
  }
  else
  {
    LODWORD(v16) = 0;
  }
  v23 = v16;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v20, v11, 0);
LABEL_38:
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_29;
  v14 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v23, 0, PoolWithTag, 20 * v23, v22, a3, a4, a6);
LABEL_30:
  ObjectPropertyKeys = v14;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_32:
  PiCMReleaseObjectInputData((__int64)v17);
  return (unsigned int)ObjectPropertyKeys;
}
