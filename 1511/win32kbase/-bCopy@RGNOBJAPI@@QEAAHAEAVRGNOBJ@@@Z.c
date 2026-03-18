/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027F10
 * Callers:
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  int v2; // eax
  _BYTE *SystemArgument2; // rsi
  __int64 v5; // r15
  __int64 v6; // rdi
  char v7; // r14
  unsigned int v8; // ebp
  __int64 result; // rax
  char v10; // [rsp+20h] [rbp-28h]

  v2 = *((_DWORD *)this + 2);
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v5 = *(_QWORD *)this;
  v6 = 3LL * (unsigned __int16)v2;
  v7 = *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v2 + 14);
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v2 + 14) = 0;
  v8 = RGNOBJ::bCopy(this, a2);
  if ( v8 && *(_QWORD *)this != v5 )
  {
    v10 = 0;
    HmgReplace(*((_QWORD *)this + 1), *(_QWORD *)this, 0LL, 1LL, v10);
  }
  result = v8;
  SystemArgument2[8 * v6 + 14] = v7;
  return result;
}
