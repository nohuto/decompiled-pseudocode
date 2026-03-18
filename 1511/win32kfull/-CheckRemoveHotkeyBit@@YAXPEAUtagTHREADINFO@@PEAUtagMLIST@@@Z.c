/*
 * XREFs of ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C010277C
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FindQMsg @ 0x1C005B2D0 (FindQMsg.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckRemoveHotkeyBit(struct tagTHREADINFO *a1, __int64 **a2)
{
  __int64 *v2; // rax
  unsigned int v3; // r8d

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
    goto LABEL_6;
  do
  {
    if ( *((_DWORD *)v2 + 6) == 786 )
      ++v3;
    v2 = (__int64 *)*v2;
  }
  while ( v2 );
  if ( v3 <= 1 )
  {
LABEL_6:
    *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= ~0x80u;
    *(_WORD *)(*((_QWORD *)a1 + 50) + 4LL) &= ~0x80u;
  }
}
