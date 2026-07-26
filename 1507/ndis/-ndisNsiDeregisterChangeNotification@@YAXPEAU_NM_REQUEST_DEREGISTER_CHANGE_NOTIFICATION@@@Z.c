/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00C6080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  char v2; // dl
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // eax

  v2 = byte_1C008531D;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1);
    v2 = byte_1C008531D;
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
            byte_1C0085040 = 0;
        }
        else
        {
          byte_1C0084FE0 = 0;
        }
      }
      else
      {
        byte_1C0084F80 = 0;
      }
    }
    else
    {
      byte_1C00850A0 = 0;
    }
  }
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_q(0x8Du, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1);
}
