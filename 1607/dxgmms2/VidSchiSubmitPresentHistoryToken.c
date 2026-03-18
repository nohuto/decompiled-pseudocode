/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C00257C4
 * Callers:
 *     VidSchiFlushQueuePacket @ 0x1C002450C (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0011D0C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0020B6C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0021654 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(__int64 a1)
{
  __int64 v1; // rbp
  struct VIDSCH_SUBMIT_DATA2 *v2; // rdi
  union _ULARGE_INTEGER v3; // rbx
  char v4; // si
  struct _VIDSCH_GLOBAL *v5; // r12
  char v6; // r8
  __int64 v7; // r13
  bool v8; // zf
  int v9; // eax
  __int64 v10; // r14
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  v2 = (struct VIDSCH_SUBMIT_DATA2 *)(a1 + 264);
  v3 = *(union _ULARGE_INTEGER *)(a1 + 104);
  v4 = 0;
  v5 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( (*(_BYTE *)(a1 + 267) & 1) != 0 )
  {
    v6 = -1;
    v7 = *(unsigned int *)(a1 + 380);
    v8 = !_BitScanForward((unsigned int *)&v9, (unsigned __int8)*(_DWORD *)(a1 + 688));
    v10 = *((_QWORD *)v5 + v7 + 371);
    if ( !v8 )
      v6 = v9;
    v11 = v6;
    if ( v6 == -1 )
      v11 = 0;
    v12 = (unsigned int)v11;
    v13 = 272 * v12;
    v14 = v12;
    if ( *(_QWORD *)(272 * v12 + v10 + 176) != 272 * v12 + v10 + 176 )
      goto LABEL_7;
    if ( *(_DWORD *)(v13 + v10 + 156) == 1 && VidSchiCheckTokenIndependentFlipCondition(v5, v2) )
    {
      if ( *(_BYTE *)(v13 + v10 + 153) )
      {
        if ( !VidSchiCheckPlaneIndependentFlipCondition(v5, v7, v14) )
        {
LABEL_7:
          VidSchiPostponePresentHistoryToken((struct _VIDSCH_CONTEXT *)v1, v2, v3);
          return;
        }
      }
      else
      {
        *(_BYTE *)(v13 + v10 + 153) = 1;
        v4 = 1;
      }
    }
  }
  VidSchiProcessPresentHistoryToken((struct _VIDSCH_CONTEXT *)v1, v2, v3, v4);
}
