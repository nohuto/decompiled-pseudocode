/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180048FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  unsigned int v9; // ebx
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v11[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v11[1] = a2;
  v11[2] = a3;
  v11[3] = a4;
  v9 = CChannel::SendCommand(this, v11, 0x10u);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
