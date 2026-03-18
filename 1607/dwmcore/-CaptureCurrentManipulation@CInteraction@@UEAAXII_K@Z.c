/*
 * XREFs of ?CaptureCurrentManipulation@CInteraction@@UEAAXII_K@Z @ 0x1800C06E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::CaptureCurrentManipulation(CInteraction *this, int a2, int a3, __int64 a4)
{
  *((_BYTE *)this + 816) |= 0x20u;
  *((_DWORD *)this + 205) = a2;
  *((_DWORD *)this + 206) = a3;
  *((_QWORD *)this + 104) = a4;
}
