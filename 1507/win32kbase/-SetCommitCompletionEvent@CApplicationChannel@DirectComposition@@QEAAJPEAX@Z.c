/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003098C
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0016110 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C001523C (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00167E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2)
{
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rbx
  NTSTATUS v6; // edi
  struct DirectComposition::CEvent *v7; // rax
  void **v8; // rsi
  struct DirectComposition::CEvent *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( *((_QWORD *)this + 45) || (*((_BYTE *)this + 184) & 8) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v4 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
    v5 = v4;
    if ( v4 )
      memset(v4, 0, sizeof(struct _ERESOURCE));
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = DirectComposition::CEvent::Create(a2, &v10);
      if ( v6 < 0 || (v6 = ExInitializeResourceLite(v5), v6 < 0) )
      {
        v8 = (void **)v10;
      }
      else
      {
        v7 = v10;
        *((_QWORD *)this + 46) = v5;
        *((_QWORD *)this + 45) = v7;
        v8 = 0LL;
        v5 = 0LL;
      }
      if ( v5 )
        Win32FreePool(v5);
      if ( v8 )
        DirectComposition::CEvent::`scalar deleting destructor'(v8);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v6;
}
