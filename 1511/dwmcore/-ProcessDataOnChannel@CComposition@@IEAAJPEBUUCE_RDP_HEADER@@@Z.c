/*
 * XREFs of ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009D9E0
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannel(CComposition *this, const struct UCE_RDP_HEADER *a2)
{
  unsigned int v3; // edx
  int AttachedChannel; // eax
  CMILRefCountBase *v6; // rdi
  int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]
  CMILRefCountBase *v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 4);
  v13 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, v3, &v13);
  v6 = v13;
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v12 = 500;
LABEL_13:
    v11 = AttachedChannel;
    goto LABEL_14;
  }
  AttachedChannel = CComposition::ProcessCommandBatch(this, *((void **)a2 + 3), *((_DWORD *)a2 + 8), v13);
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v12 = 503;
    goto LABEL_13;
  }
  if ( *((_DWORD *)v6 + 13) )
  {
    v9 = *((_QWORD *)this + 141);
    LODWORD(v13) = *((_DWORD *)v6 + 13);
    v10 = *(_QWORD *)(v9 + 56);
    HIDWORD(v13) = *((_DWORD *)v6 + 14);
    v7 = CoreUICallSend(v10, &v13, 2LL, 0LL, &unk_18016DC15, 0);
    if ( v7 == -2018375675 )
      v7 = 0;
    if ( v7 < 0 )
    {
      v12 = 536;
      v11 = v7;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    }
  }
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return (unsigned int)v7;
}
