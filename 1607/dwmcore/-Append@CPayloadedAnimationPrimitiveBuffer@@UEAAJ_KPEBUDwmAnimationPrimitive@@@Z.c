/*
 * XREFs of ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x18001F200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Append(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3)
{
  char *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = (char *)this + 16;
  v4 = *((unsigned int *)this + 10);
  v5 = v4 + a2;
  if ( (unsigned int)v4 + a2 < (unsigned int)v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v6 = 0;
    if ( v5 <= *((_DWORD *)this + 9) )
    {
      memcpy_0((void *)(*(_QWORD *)v3 + 32 * v4), a3, 32LL * a2);
      *((_DWORD *)v3 + 6) = v5;
    }
    else
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v3, 32LL, a2, a3);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
  }
  return v6;
}
