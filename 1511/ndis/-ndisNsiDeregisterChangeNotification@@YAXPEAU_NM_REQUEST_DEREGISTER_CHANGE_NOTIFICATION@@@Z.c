/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00BF3F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  char v2; // dl
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // eax

  v2 = byte_1C008371D;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
    v2 = byte_1C008371D;
  }
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 <= 7 )
  {
    if ( (_DWORD)v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 5;
        if ( v5 )
        {
          if ( v5 == 1 )
            byte_1C0082FE0 = 0;
        }
        else
        {
          byte_1C0082F80 = 0;
        }
      }
      else
      {
        byte_1C0083230 = 0;
      }
    }
    else
    {
      byte_1C0083040 = 0;
    }
  }
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x8Du, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
}
