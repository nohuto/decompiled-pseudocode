/*
 * XREFs of ?OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180060630
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

__int64 __fastcall TouchProcessor::OnPointerInfoFrame(
        TouchProcessor *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  __int64 v4; // rdi
  signed int LastError; // ebx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  _DWORD v11[364]; // [rsp+30h] [rbp-5D8h] BYREF

  v4 = a2;
  LastError = 0;
  memset(v11, 0, sizeof(v11));
  if ( (_DWORD)v4 )
    memcpy_0(&v11[4], a3, 144 * v4);
  v7 = *((_QWORD *)this - 17);
  v11[0] = v4;
  v8 = *(unsigned __int8 *)(v7 + 24);
  LODWORD(v7) = *((_DWORD *)this + 120);
  v11[1] = v8;
  v11[2] = 1;
  v11[3] = v7;
  if ( !(unsigned int)MITSynthesizeTouchInput(v11) )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0x80070000;
    else
      LastError = GetLastError();
    if ( LastError < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 453, LastError);
  }
  return (unsigned int)LastError;
}
