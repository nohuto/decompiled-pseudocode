/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x180047F48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // esi
  unsigned int v9; // ebx
  int v10; // eax

  v5 = (char *)this + 136;
  v6 = *((unsigned int *)this + 40);
  v7 = a5 >> 4;
  v8 = v6 + v7;
  if ( (int)v6 + (int)v7 < (unsigned int)v6 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1F0u);
    return v9;
  }
  v9 = 0;
  if ( v8 <= *((_DWORD *)this + 39) )
  {
    memcpy_0((void *)(*(_QWORD *)v5 + 16 * v6), a4, 16 * v7);
    *((_DWORD *)v5 + 6) = v8;
    return v9;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 0x10u, v7, a4);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    goto LABEL_8;
  }
  return v9;
}
