/*
 * XREFs of _DuplicateCursor @ 0x1C01536CC
 * Callers:
 *     _GetWindowIcon @ 0x1C0153630 (_GetWindowIcon.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     _CreateEmptyCursorObject @ 0x1C005CBB0 (_CreateEmptyCursorObject.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

struct tagCURSOR *__fastcall DuplicateCursor(__int64 a1, int a2)
{
  struct tagCURSOR *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 EmptyCursorObject; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t Size; // [rsp+28h] [rbp-89h]
  unsigned __int16 v12[5]; // [rsp+38h] [rbp-79h] BYREF
  int v13; // [rsp+42h] [rbp-6Fh]
  __int16 v14; // [rsp+46h] [rbp-6Bh]
  int v15; // [rsp+48h] [rbp-69h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-65h]
  __int16 v17; // [rsp+50h] [rbp-61h]
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  int v20[36]; // [rsp+68h] [rbp-49h] BYREF
  int v21; // [rsp+120h] [rbp+6Fh] BYREF

  v21 = a2;
  v3 = 0LL;
  if ( (unsigned int)InternalGetIconInfo(a1, (__int64)&v15, 0LL, 0LL, &v21, 0) )
  {
    EmptyCursorObject = CreateEmptyCursorObject(0, v4, v5);
    LOBYTE(v7) = 3;
    v3 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, v7, v8, v9);
    if ( v3 )
    {
      memset(v12, 0, sizeof(v12));
      v13 = 0;
      v14 = 0;
      memset(v20, 0, 0x88uLL);
      *(_OWORD *)v20 = 0LL;
      if ( v15 )
        LOWORD(v20[4]) = 3;
      else
        LOWORD(v20[4]) = 1;
      v20[20] = v21;
      v20[21] = *(_DWORD *)(a1 + 140);
      v20[22] = *(_DWORD *)(a1 + 144);
      LOWORD(v20[7]) = v16;
      HIWORD(v20[7]) = v17;
      *(_QWORD *)&v20[8] = v18;
      *(_QWORD *)&v20[10] = v19;
      LODWORD(Size) = 0;
      if ( !(unsigned int)SetCursorIconData((__int64)v3, (__int64)v12, v12, (__int64)v20, Size) )
      {
        DestroyCursor(v3, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v18);
      GreDeleteObject(v19);
    }
  }
  return v3;
}
