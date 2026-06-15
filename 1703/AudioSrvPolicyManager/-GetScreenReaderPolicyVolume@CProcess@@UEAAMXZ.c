/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x18000F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001B190 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  float v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 39), *((_DWORD *)this + 38), &v2) )
    return FLOAT_1_0;
  else
    return v2;
}
