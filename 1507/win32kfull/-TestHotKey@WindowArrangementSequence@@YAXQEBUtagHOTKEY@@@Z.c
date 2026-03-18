/*
 * XREFs of ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C0100170
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0049878 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 */

void __fastcall WindowArrangementSequence::TestHotKey(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *const a2)
{
  int v2; // eax
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)this == gptiRit && (unsigned int)(*((_DWORD *)this + 8) - 14) <= 0xD;
  if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress != v2 )
  {
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = v2;
    if ( !v2 )
    {
      memset(v3, 0, sizeof(v3));
      v3[0] = 0LL;
      LODWORD(v3[1]) = 3;
      v3[2] = 1LL;
      v3[3] = 8LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v3);
      WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
    }
  }
}
