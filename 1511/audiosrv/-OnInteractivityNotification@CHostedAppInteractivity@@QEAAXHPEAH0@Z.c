/*
 * XREFs of ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180066DFC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x180066F64 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHostedAppInteractivity::OnInteractivityNotification(
        CHostedAppInteractivity *this,
        int a2,
        int *a3,
        int *a4)
{
  int v4; // r11d
  int v5; // r10d
  int v6; // eax

  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( a2 )
  {
    v6 = v4 + 1;
LABEL_5:
    *((_DWORD *)this + 3) = v6;
    goto LABEL_6;
  }
  if ( v4 )
  {
    v6 = v4 - 1;
    goto LABEL_5;
  }
LABEL_6:
  *a3 = (v4 != 0) != (*((_DWORD *)this + 3) != 0);
  LOBYTE(v5) = *((_DWORD *)this + 3) != 0;
  *a4 = v5;
}
