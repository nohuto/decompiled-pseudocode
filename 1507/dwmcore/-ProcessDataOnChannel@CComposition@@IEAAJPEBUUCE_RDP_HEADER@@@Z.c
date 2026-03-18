/*
 * XREFs of ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C468
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::ProcessDataOnChannel(CComposition *this, const struct UCE_RDP_HEADER *a2)
{
  unsigned int v3; // edx
  int AttachedChannel; // eax
  CMILRefCountBase *v6; // rdi
  int v7; // ebx
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  CMILRefCountBase *v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 4);
  v13 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, v3, &v13);
  v6 = v13;
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v12 = 497;
LABEL_9:
    v9 = AttachedChannel;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
    goto LABEL_4;
  }
  AttachedChannel = CComposition::ProcessCommandBatch(
                      (CPartitionVerticalBlankScheduler **)this,
                      *((unsigned int **)a2 + 3),
                      *((_DWORD *)a2 + 8),
                      v13);
  v7 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    v12 = 500;
    goto LABEL_9;
  }
  if ( *((_DWORD *)v6 + 13) )
  {
    v10 = *((_QWORD *)this + 145);
    LODWORD(v13) = *((_DWORD *)v6 + 13);
    v11 = *(_QWORD *)(v10 + 56);
    HIDWORD(v13) = *((_DWORD *)v6 + 14);
    v7 = CoreUICallSend(v11, &v13, 2LL, 0LL, &unk_180162B49, 0);
    if ( v7 == -2018375675 )
      v7 = 0;
    if ( v7 < 0 )
    {
      v12 = 533;
      v9 = v7;
      goto LABEL_14;
    }
  }
LABEL_4:
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return (unsigned int)v7;
}
