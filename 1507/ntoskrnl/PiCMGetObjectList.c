/*
 * XREFs of PiCMGetObjectList @ 0x1404DBAE4
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectList @ 0x1404DD1BC (_PnpGetObjectList.c)
 */

__int64 __fastcall PiCMGetObjectList(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID PoolWithTag; // rsi
  signed int ObjectList; // ebx
  int v11; // r8d
  int v12; // r9d
  int v13; // edi
  int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  signed int v17; // eax
  _BYTE v19[4]; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  int v25; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  PoolWithTag = 0LL;
  *v6 = 0;
  ObjectList = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( ObjectList < 0 )
    goto LABEL_27;
  if ( v22 || v23 || v20 || v24 )
  {
    ObjectList = -1073741811;
    goto LABEL_23;
  }
  if ( !a3 || a4 < 0x14 || (v21 & 0x7FFF0000) != 0 )
    goto LABEL_40;
  v11 = 2;
  v12 = 1;
  if ( (v21 & 0x80000000) == 0x80000000 )
  {
    v13 = 0;
    if ( (unsigned __int16)v21 < 0xBu )
      v13 = (unsigned __int16)v21;
LABEL_12:
    if ( v13 )
      goto LABEL_13;
LABEL_40:
    ObjectList = -1073741811;
    goto LABEL_29;
  }
  switch ( (unsigned __int16)v21 )
  {
    case 1u:
      v13 = 1;
      goto LABEL_12;
    case 2u:
      v13 = 2;
      break;
    case 3u:
      v13 = 4;
      break;
    case 4u:
      v13 = 3;
      break;
    default:
      goto LABEL_40;
  }
LABEL_13:
  v14 = v13 - 1;
  if ( v13 == 1 || (v14 = v13 - 3, v13 == 3) || v13 == 5 )
    ObjectList = -1073741637;
  if ( ObjectList < 0 )
    goto LABEL_29;
  v15 = a4 - 20;
  if ( a4 - 20 < 2 )
    v15 = 0;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectList = -1073741670;
      goto LABEL_29;
    }
    v16 = v15 >> 1;
  }
  else
  {
    v16 = 0;
  }
  LODWORD(a6) = v16;
  ObjectList = PnpGetObjectList(v14, v13, v11, v12, (__int64)PoolWithTag, v16, (__int64)&a6, 0);
LABEL_23:
  if ( ObjectList >= 0 )
  {
    v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, PoolWithTag, 2 * (int)a6, v25, a3, a4, v6);
    goto LABEL_25;
  }
LABEL_29:
  v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, 0LL, 0, v25, a3, a4, v6);
LABEL_25:
  ObjectList = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_27:
  PiCMReleaseObjectInputData((__int64)v19);
  return (unsigned int)ObjectList;
}
