/*
 * XREFs of ExpHwidGetDevicePropertyData @ 0x1404F7188
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x1404F61F0 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1404F63A4 (ExpHwidGetDeviceProperties.c)
 *     sub_1406B9E7C @ 0x1406B9E7C (sub_1406B9E7C.c)
 * Callees:
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404EDC5C (ExpHwidEnsurePropertyBufferLength.c)
 *     sub_1404F5CD8 @ 0x1404F5CD8 (sub_1404F5CD8.c)
 *     IoGetDevicePropertyData @ 0x1404F757C (IoGetDevicePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall ExpHwidGetDevicePropertyData(PDEVICE_OBJECT Pdo, int a2, const DEVPROPKEY *a3, int a4, __int64 Type)
{
  char v5; // r14
  unsigned int v10; // edi
  __int64 v11; // rbx
  ULONG Size; // ecx
  int v13; // eax
  int v14; // r8d
  int v15; // r10d
  ULONG v16; // edx
  _WORD *v17; // r9
  ULONG v19; // eax
  ULONG v20; // edx
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
    Size = *(unsigned __int16 *)(v11 + 2) - v10;
    v13 = Pdo
        ? IoGetDevicePropertyData(Pdo, a3, 0, 0, Size, *(PVOID *)(v11 + 8), &RequiredSize, (PDEVPROPTYPE)&Type)
        : PnpGetDeviceInterfacePropertyData(
            a2,
            (_DWORD)a3,
            0,
            a4,
            Size,
            *(_QWORD *)(v11 + 8),
            (__int64)&RequiredSize,
            (__int64)&Type);
    v14 = v13;
    if ( v13 >= 0 )
      break;
    if ( v13 != -1073741789 )
      goto LABEL_14;
    if ( v5 )
      goto LABEL_29;
    v19 = RequiredSize;
    v20 = v10 + RequiredSize;
    RequiredSize = v20;
    if ( v20 < v19 )
    {
      v14 = -1073741670;
      goto LABEL_14;
    }
    if ( (int)ExpHwidEnsurePropertyBufferLength(v11, v20) < 0 )
      goto LABEL_29;
    v5 = 1;
  }
  v15 = Type;
  if ( (_DWORD)Type != a4 )
    goto LABEL_29;
  if ( a4 == 18 || a4 == 8210 )
  {
    v16 = RequiredSize;
    if ( (RequiredSize & 1) != 0 )
      goto LABEL_29;
    v17 = (_WORD *)(*(_QWORD *)(v11 + 8) + 2 * ((unsigned __int64)RequiredSize >> 1));
    if ( RequiredSize < 2 || *(v17 - 1) )
    {
      *v17++ = 0;
      v15 = Type;
      v16 = RequiredSize + 2;
      RequiredSize += 2;
    }
    if ( v15 == 8210 && (v16 < 4 || *(v17 - 2)) )
    {
      *v17 = 0;
      v15 = Type;
      LOWORD(v16) = RequiredSize + 2;
    }
  }
  else
  {
    LOWORD(v16) = RequiredSize;
  }
  *(_WORD *)v11 = v16;
  *(_DWORD *)(v11 + 4) = v15;
LABEL_14:
  if ( v14 < 0 )
LABEL_29:
    sub_1404F5CD8(v11);
  return (unsigned int)v14;
}
