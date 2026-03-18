/*
 * XREFs of ?GetReadPointerInternal@?$CMrowReader@USharedBufferDataFlipChain@@@@MEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800A9180
 * Callers:
 *     ?GetReadPointer@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipChain@@@Z @ 0x1800BCCC0 (-GetReadPointer@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAJHPEAPEBUSharedBufferDataFlipCha.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMrowReader<SharedBufferDataFlipChain>::GetReadPointerInternal(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  signed __int32 v9; // ecx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        v9 = *(_DWORD *)(v8 + 28);
        if ( (v9 | (v9 + 1)) >= 0 && v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), v9 + 1, v9) )
          v7 = 96LL * *(unsigned __int16 *)(v8 + 24) + v8 + 32;
        if ( !a2 )
          break;
        if ( v7 )
          goto LABEL_8;
        Sleep(0);
      }
      if ( v7 )
      {
LABEL_8:
        (***(void (__fastcall ****)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8));
        *a3 = v7;
        return v3;
      }
      v11 = -2003304297;
      v12 = 220;
    }
    else
    {
      v11 = -2147024809;
      v12 = 183;
    }
  }
  else
  {
    v11 = -2003292404;
    v12 = 180;
  }
  v3 = v11;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
  return v3;
}
