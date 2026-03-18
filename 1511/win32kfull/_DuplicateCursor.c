/*
 * XREFs of _DuplicateCursor @ 0x1C014C640
 * Callers:
 *     _GetWindowIcon @ 0x1C014C5AC (_GetWindowIcon.c)
 * Callees:
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     _CreateEmptyCursorObject @ 0x1C00EF040 (_CreateEmptyCursorObject.c)
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DuplicateCursor(__int64 a1, int a2)
{
  __int64 v3; // rbx
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
    v3 = HMValidateHandle(EmptyCursorObject, 3);
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
      if ( !(unsigned int)SetCursorIconData(v3, (__int64)&v9, &v9, (__int64)v15, Size) )
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
