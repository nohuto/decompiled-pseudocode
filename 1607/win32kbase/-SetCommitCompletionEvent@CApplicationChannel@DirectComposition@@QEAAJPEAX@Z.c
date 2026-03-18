/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003DC80
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C007E9F0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C007A2B4 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2)
{
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rbx
  unsigned int v6; // edx
  NTSTATUS v7; // edi
  struct DirectComposition::CEvent *v8; // rax
  DirectComposition::CEvent *v9; // rsi
  struct DirectComposition::CEvent *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( *((_QWORD *)this + 46) || (*((_BYTE *)this + 248) & 8) != 0 )
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
      v7 = DirectComposition::CEvent::Create(a2, &v11);
      if ( v7 < 0 || (v7 = ExInitializeResourceLite(v5), v7 < 0) )
      {
        v9 = v11;
      }
      else
      {
        v8 = v11;
        *((_QWORD *)this + 47) = v5;
        *((_QWORD *)this + 46) = v8;
        v9 = 0LL;
        v5 = 0LL;
      }
      if ( v5 )
        Win32FreePool();
      if ( v9 )
        DirectComposition::CEvent::`scalar deleting destructor'(v9, v6);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v7;
}
