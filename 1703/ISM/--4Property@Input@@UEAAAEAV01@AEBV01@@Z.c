/*
 * XREFs of ??4Property@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180027790
 * Callers:
 *     ??4?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAAEAV?$ModifiedNotifier@VProperty@Input@@@1@AEBV21@@Z @ 0x18001CB50 (--4-$PropertyModifiedAdapter@V-$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@U_ea_18001CB50.c)
 * Callees:
 *     ?Set@Value@Input@@QEAAJPEBXK@Z @ 0x18002711C (-Set@Value@Input@@QEAAJPEBXK@Z.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

__int64 __fastcall Input::Property::operator=(__int64 a1, __int64 a2)
{
  int v4; // eax
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    if ( a2 + 32 != a1 + 32 )
    {
      v4 = Input::Value::Set((void **)(a1 + 32), *(const void **)(a2 + 32), *(_DWORD *)(a2 + 40));
      if ( v4 < 0 )
      {
        pExceptionObject = v4;
        throw (long *)&pExceptionObject;
      }
    }
  }
  return a1;
}
