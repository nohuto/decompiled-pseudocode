/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C008421C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C0110C10 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall WindowArrangementSequence::TestSequence(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *const a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  const struct tagHOTKEY *v5; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-30h] BYREF

  if ( this )
  {
    v5 = (const struct tagHOTKEY *)((unsigned __int16)a2 << 16);
    if ( ((unsigned int)v5 | a4) != qword_1C03234F8 )
      WindowArrangementSequence::TestHotKey(this, v5);
  }
  else
  {
    if ( a5 )
    {
      if ( a3 )
      {
        if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress || (a3 & 0xE) != 0 )
          return;
      }
      else if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
      {
        return;
      }
      memset(v6, 0, sizeof(v6));
      v6[2] = 1LL;
      goto LABEL_16;
    }
    if ( a3 == 8 && WindowArrangementSequence::fWindowArrangementSequenceInProgress )
    {
      memset(v6, 0, sizeof(v6));
      v6[2] = 2LL;
LABEL_16:
      v6[0] = 0LL;
      LODWORD(v6[1]) = 3;
      v6[3] = 8LL;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v6);
      WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
    }
  }
}
