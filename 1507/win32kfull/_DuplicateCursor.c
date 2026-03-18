/*
 * XREFs of _DuplicateCursor @ 0x1C012366C
 * Callers:
 *     _GetWindowIcon @ 0x1C01235D8 (_GetWindowIcon.c)
 * Callees:
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     _CreateEmptyCursorObject @ 0x1C00E94B0 (_CreateEmptyCursorObject.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

struct tagCURSOR *__fastcall DuplicateCursor(__int64 a1, int a2)
{
  struct tagCURSOR *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 EmptyCursorObject; // rax
  size_t Size; // [rsp+28h] [rbp-89h]
  __int128 v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+48h] [rbp-69h] BYREF
  __int16 v11; // [rsp+4Ch] [rbp-65h]
  __int16 v12; // [rsp+50h] [rbp-61h]
  __int64 v13; // [rsp+58h] [rbp-59h]
  __int64 v14; // [rsp+60h] [rbp-51h]
  int v15[36]; // [rsp+68h] [rbp-49h] BYREF
  int v16; // [rsp+120h] [rbp+6Fh] BYREF

  v16 = a2;
  v3 = 0LL;
  if ( (unsigned int)InternalGetIconInfo(a1, (__int64)&v10, 0LL, 0LL, &v16, 0) )
  {
    EmptyCursorObject = CreateEmptyCursorObject(0, v4, v5);
    v3 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, 3);
    if ( v3 )
    {
      v9 = 0uLL;
      memset(v15, 0, 0x88uLL);
      *(_OWORD *)v15 = 0LL;
      if ( v10 )
        LOWORD(v15[4]) = 3;
      else
        LOWORD(v15[4]) = 1;
      v15[20] = v16;
      v15[21] = *(_DWORD *)(a1 + 140);
      v15[22] = *(_DWORD *)(a1 + 144);
      LOWORD(v15[7]) = v11;
      HIWORD(v15[7]) = v12;
      *(_QWORD *)&v15[8] = v13;
      *(_QWORD *)&v15[10] = v14;
      LODWORD(Size) = 0;
      if ( !(unsigned int)SetCursorIconData((__int64)v3, (__int64)&v9, &v9, (__int64)v15, Size) )
      {
        DestroyCursor(v3, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v13);
      GreDeleteObject(v14);
    }
  }
  return v3;
}
