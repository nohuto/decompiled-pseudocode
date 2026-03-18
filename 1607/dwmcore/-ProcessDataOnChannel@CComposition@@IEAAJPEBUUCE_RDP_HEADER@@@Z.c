/*
 * XREFs of ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800435F8
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C (-DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z.c)
 * Callees:
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18003B8E4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannel(CComposition *this, const struct UCE_RDP_HEADER *a2)
{
  unsigned int v3; // edx
  int AttachedChannel; // eax
  unsigned int *v6; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-48h]
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  struct CChannelContext *v12; // [rsp+78h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 4);
  v12 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, v3, &v12);
  v6 = (unsigned int *)v12;
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v10 = 503;
    goto LABEL_13;
  }
  AttachedChannel = CComposition::ProcessCommandBatch(
                      (CRenderTargetManager **)this,
                      *((unsigned int **)a2 + 3),
                      *((_DWORD *)a2 + 8),
                      (struct CResourceTable **)v12);
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v10 = 506;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, v10);
    goto LABEL_8;
  }
  if ( v6[13] )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 154) + 56LL);
    v11[0] = v6[13];
    v11[1] = v6[14];
    v7 = CoreUICallSend(v8, v11, 2LL, 2LL, 0, &unk_1801AD3A5, 0);
    if ( v7 == -2018375675 )
      v7 = 0;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x21Bu);
  }
LABEL_8:
  if ( v6 )
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
  return (unsigned int)v7;
}
