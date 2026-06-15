/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180019AF0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct IAudioSessionInfo *)*((_QWORD *)this + 7);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
