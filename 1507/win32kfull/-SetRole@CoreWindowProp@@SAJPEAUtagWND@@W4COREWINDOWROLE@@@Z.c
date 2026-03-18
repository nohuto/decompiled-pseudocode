/*
 * XREFs of ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C02262C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0226240 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C0226180 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CoreWindowProp::SetRole(struct tagWND *a1, int a2)
{
  int v3; // edx
  int v4; // ebx
  struct CoreWindowProp *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CoreWindowProp::GetOrCreate(a1, &v6);
  if ( v3 >= 0 && a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *((_DWORD *)v6 + 4) = 1;
      }
      else
      {
        UserSetLastError(87);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v6 + 5) = 1;
    }
  }
  return (unsigned int)v3;
}
