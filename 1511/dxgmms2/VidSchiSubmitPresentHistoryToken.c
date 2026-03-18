/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0
 * Callers:
 *     VidSchiFlushQueuePacket @ 0x1C0020DB4 (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C000163C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0001CC8 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C000222C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  struct VIDSCH_SUBMIT_DATA2 *v5; // rdi
  union _ULARGE_INTEGER v6; // rbx
  char v7; // si
  struct _VIDSCH_GLOBAL *v8; // r12
  __int64 v9; // r13
  bool v10; // zf
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 80);
  v5 = (struct VIDSCH_SUBMIT_DATA2 *)(a1 + 256);
  v6 = *(union _ULARGE_INTEGER *)(a1 + 96);
  v7 = 0;
  v8 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v4 + 104) + 32LL);
  if ( (*(_BYTE *)(a1 + 259) & 1) != 0 )
  {
    v9 = *(unsigned int *)(a1 + 372);
    v10 = !_BitScanForward(&v11, (unsigned __int8)*(_DWORD *)(a1 + 616));
    v12 = *((_QWORD *)v8 + v9 + 324);
    v13 = 0xFFFFFFFFLL;
    if ( !v10 )
      v13 = v11;
    v14 = v13;
    if ( (_BYTE)v13 == 0xFF )
      v14 = 0;
    v15 = (unsigned int)v14;
    v16 = 280 * v15;
    v17 = v15;
    if ( *(_QWORD *)(280 * v15 + v12 + 184) != 280 * v15 + v12 + 184 )
      goto LABEL_7;
    if ( *(_DWORD *)(v16 + v12 + 156) == 1 && VidSchiCheckTokenIndependentFlipCondition(v8, v5, v13) )
    {
      if ( *(_BYTE *)(v16 + v12 + 153) )
      {
        if ( !VidSchiCheckPlaneIndependentFlipCondition(v8, v9, v17) )
        {
LABEL_7:
          VidSchiPostponePresentHistoryToken((struct _VIDSCH_CONTEXT *)v4, v5, v6);
          return;
        }
      }
      else
      {
        *(_BYTE *)(v16 + v12 + 153) = 1;
        v7 = 1;
      }
    }
  }
  LOBYTE(a4) = v7;
  VidSchiProcessPresentHistoryToken((struct _VIDSCH_CONTEXT *)v4, v5, v6, a4);
}
