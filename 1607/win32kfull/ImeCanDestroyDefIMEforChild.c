/*
 * XREFs of ImeCanDestroyDefIMEforChild @ 0x1C009BB44
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C009D62C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     IsChildSameThread @ 0x1C01D9CF0 (IsChildSameThread.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v6; // rbx

  v3 = unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 360);
  if ( !v4 || v4 == -1LL )
    return 0LL;
  if ( v4 >= W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  if ( (*(_DWORD *)(v4 + 44) & 0x10) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 88);
  if ( !v6 || *(_QWORD *)(a2 + 16) == *(_QWORD *)(v6 + 16) )
    return 0LL;
  do
  {
    if ( v6 == GetDesktopWindow(v6) )
      break;
    if ( (unsigned int)IsChildSameThread(v6, a2) )
      return 0LL;
    v6 = *(_QWORD *)(v6 + 88);
  }
  while ( v6 );
  return 1LL;
}
