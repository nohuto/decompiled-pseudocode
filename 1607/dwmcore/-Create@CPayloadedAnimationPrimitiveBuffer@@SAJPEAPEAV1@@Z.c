/*
 * XREFs of ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x18001F0C4
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001EE94 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Create(struct CPayloadedAnimationPrimitiveBuffer **a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  struct CPayloadedAnimationPrimitiveBuffer *v4; // rbx

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         48LL);
  v4 = (struct CPayloadedAnimationPrimitiveBuffer *)v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v3 = &CPayloadedAnimationPrimitiveBuffer::`vftable';
    *(_DWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_DWORD *)(v3 + 40) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(struct CPayloadedAnimationPrimitiveBuffer *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xDu);
  }
  return v2;
}
