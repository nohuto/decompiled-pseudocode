/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A208
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A658 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001C2F0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  __int64 *v2; // rax
  unsigned int v3; // ebx
  struct AUDIOPROTOCOLNOTIFY *v4; // rdi
  __int64 *v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = 0LL;
  do
  {
    v5 = v2;
    if ( !v2 )
      break;
    v4 = (struct AUDIOPROTOCOLNOTIFY *)v2[2];
    v2 = (__int64 *)*v2;
  }
  while ( v4 != a2 );
  if ( v5 )
  {
    v6 = *v5;
    if ( v5 == *((__int64 **)a1 + 2) )
      *((_QWORD *)a1 + 2) = v6;
    else
      *(_QWORD *)v5[1] = v6;
    v7 = (_QWORD *)v5[1];
    if ( v5 == *((__int64 **)a1 + 3) )
      *((_QWORD *)a1 + 3) = v7;
    else
      *(_QWORD *)(*v5 + 8) = v7;
    --*((_DWORD *)a1 + 8);
    *v5 = 0LL;
    v5[1] = 0LL;
    operator delete(v5, 0x18uLL);
    operator delete(v4, 4uLL);
  }
  else
  {
    return 1168;
  }
  return v3;
}
