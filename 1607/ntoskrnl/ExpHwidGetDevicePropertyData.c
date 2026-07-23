/*
 * XREFs of ExpHwidGetDevicePropertyData @ 0x1404DA114
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x1404D917C (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1404D9330 (ExpHwidGetDeviceProperties.c)
 *     sub_1406B9FB4 @ 0x1406B9FB4 (sub_1406B9FB4.c)
 * Callees:
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404CFD80 (ExpHwidEnsurePropertyBufferLength.c)
 *     sub_1404D8C64 @ 0x1404D8C64 (sub_1404D8C64.c)
 *     IoGetDevicePropertyData @ 0x1404DA508 (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E388 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall ExpHwidGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        const DEVPROPKEY *a3,
        int a4,
        __int64 Type)
{
  char v5; // r14
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  int v14; // r10d
  ULONG v15; // edx
  _WORD *v16; // r9
  ULONG v18; // eax
  ULONG v19; // edx
  ULONG RequiredSize; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  RequiredSize = 0;
  if ( a4 == 18 )
  {
    v10 = 2;
  }
  else
  {
    v10 = 4;
    if ( a4 != 8210 )
      v10 = 0;
  }
  v11 = Type;
  if ( *(unsigned __int16 *)(Type + 2) < v10 && (int)ExpHwidEnsurePropertyBufferLength(Type, v10) < 0 )
    goto LABEL_29;
  while ( 1 )
  {
    v12 = Pdo
        ? IoGetDevicePropertyData(
            Pdo,
            a3,
            0,
            0,
            *(unsigned __int16 *)(v11 + 2) - v10,
            *(PVOID *)(v11 + 8),
            &RequiredSize,
            (PDEVPROPTYPE)&Type)
        : PnpGetDeviceInterfacePropertyData(a2, a3, 0LL);
    v13 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741789 )
      goto LABEL_14;
    if ( v5 )
      goto LABEL_29;
    v18 = RequiredSize;
    v19 = v10 + RequiredSize;
    RequiredSize = v19;
    if ( v19 < v18 )
    {
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( (int)ExpHwidEnsurePropertyBufferLength(v11, v19) < 0 )
      goto LABEL_29;
    v5 = 1;
  }
  v14 = Type;
  if ( (_DWORD)Type != a4 )
    goto LABEL_29;
  if ( a4 == 18 || a4 == 8210 )
  {
    v15 = RequiredSize;
    if ( (RequiredSize & 1) != 0 )
      goto LABEL_29;
    v16 = (_WORD *)(*(_QWORD *)(v11 + 8) + 2 * ((unsigned __int64)RequiredSize >> 1));
    if ( RequiredSize < 2 || *(v16 - 1) )
    {
      *v16++ = 0;
      v14 = Type;
      v15 = RequiredSize + 2;
      RequiredSize += 2;
    }
    if ( v14 == 8210 && (v15 < 4 || *(v16 - 2)) )
    {
      *v16 = 0;
      v14 = Type;
      LOWORD(v15) = RequiredSize + 2;
    }
  }
  else
  {
    LOWORD(v15) = RequiredSize;
  }
  *(_WORD *)v11 = v15;
  *(_DWORD *)(v11 + 4) = v14;
LABEL_14:
  if ( v13 < 0 )
LABEL_29:
    sub_1404D8C64(v11);
  return (unsigned int)v13;
}
