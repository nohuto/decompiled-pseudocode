/*
 * XREFs of ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180007FC8
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180008D10 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
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
    goto LABEL_5;
  }
  if ( v4 )
  {
    v6 = v4 - 1;
LABEL_5:
    *((_DWORD *)this + 3) = v6;
  }
  *a3 = (v4 != 0) != (*((_DWORD *)this + 3) != 0);
  LOBYTE(v5) = *((_DWORD *)this + 3) != 0;
  *a4 = v5;
}
