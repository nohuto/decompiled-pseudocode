/*
 * XREFs of sub_1404DB5DC @ 0x1404DB5DC
 * Callers:
 *     sub_1404DB260 @ 0x1404DB260 (sub_1404DB260.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 *     sub_1406FC290 @ 0x1406FC290 (sub_1406FC290.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 *     sub_1404DBACC @ 0x1404DBACC (sub_1404DBACC.c)
 *     sub_140559BD8 @ 0x140559BD8 (sub_140559BD8.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14067EBE8 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall sub_1404DB5DC(PDEVICE_OBJECT Pdo, int a2, const DEVPROPKEY *a3, int a4, __int64 Type)
{
  char v5; // r14
  unsigned int v10; // edi
  __int64 v11; // rbx
  ULONG Size; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r10d
  _WORD *v17; // r9
  ULONG v19; // eax
  int v20; // eax
  int v21; // eax
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
  if ( *(unsigned __int16 *)(Type + 2) < v10 && (v21 = sub_140559BD8(Type, v10), v15 = (unsigned int)v21, v21 < 0) )
  {
LABEL_29:
    sub_1404DBACC(v11, v14, v15);
  }
  else
  {
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
      v15 = (unsigned int)v13;
      if ( v13 >= 0 )
        break;
      if ( v13 != -1073741789 )
        goto LABEL_14;
      if ( v5 )
        goto LABEL_29;
      v19 = RequiredSize;
      v14 = v10 + RequiredSize;
      RequiredSize = v14;
      if ( (unsigned int)v14 < v19 )
      {
        v15 = 3221225626LL;
        goto LABEL_14;
      }
      v20 = sub_140559BD8(v11, v14);
      v15 = (unsigned int)v20;
      if ( v20 < 0 )
        goto LABEL_29;
      v5 = 1;
    }
    v16 = Type;
    if ( (_DWORD)Type != a4 )
    {
      v15 = 3221225508LL;
      goto LABEL_29;
    }
    if ( a4 == 18 || a4 == 8210 )
    {
      v14 = RequiredSize;
      if ( (RequiredSize & 1) != 0 )
      {
        v15 = 3221225476LL;
        goto LABEL_29;
      }
      v17 = (_WORD *)(*(_QWORD *)(v11 + 8) + 2 * ((unsigned __int64)RequiredSize >> 1));
      if ( RequiredSize < 2 || *(v17 - 1) )
      {
        *v17++ = 0;
        v16 = Type;
        v14 = RequiredSize + 2;
        RequiredSize += 2;
      }
      if ( v16 == 8210 && ((unsigned int)v14 < 4 || *(v17 - 2)) )
      {
        *v17 = 0;
        v16 = Type;
        v14 = RequiredSize + 2;
      }
    }
    else
    {
      v14 = RequiredSize;
    }
    *(_WORD *)v11 = v14;
    *(_DWORD *)(v11 + 4) = v16;
LABEL_14:
    if ( (int)v15 < 0 )
      goto LABEL_29;
  }
  return (unsigned int)v15;
}
