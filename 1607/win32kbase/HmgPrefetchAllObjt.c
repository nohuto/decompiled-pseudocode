/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C0076990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // ebx
  GdiHandleManager *v5; // rcx
  unsigned int v6; // edi
  __int64 result; // rax
  struct OBJECT *EntryObject; // rax
  struct _ENTRY *v9; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v10[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+38h] [rbp-D0h]
  _QWORD *v12; // [rsp+48h] [rbp-C0h]
  _QWORD v13[32]; // [rsp+58h] [rbp-B0h] BYREF

  v4 = 0;
  v9 = 0LL;
  memset(v13, 0, sizeof(v13));
  v10[0] = 1;
  v10[1] = 0;
  v6 = 0;
  v12 = v13;
  v11 = 0xFFFFFFFFFFFFFFFDuLL;
  while ( 1 )
  {
    result = GdiHandleManager::GetNextEntryIndex(v5, v6, &v9);
    v6 = result;
    if ( !(_DWORD)result )
      break;
    if ( *((_BYTE *)v9 + 14) == a1 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      result);
      if ( EntryObject )
      {
        v5 = (GdiHandleManager *)(2LL * v4++);
        v13[(_QWORD)v5] = EntryObject;
        v13[(_QWORD)v5 + 1] = a2;
      }
    }
    if ( v4 == 16 )
    {
      *((_QWORD *)&v11 + 1) = 16LL;
      MmPrefetchVirtualAddresses(v10);
      v4 = 0;
    }
  }
  if ( v4 )
  {
    *((_QWORD *)&v11 + 1) = v4;
    return MmPrefetchVirtualAddresses(v10);
  }
  return result;
}
