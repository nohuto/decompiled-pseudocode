/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180095004
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18009E2C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180029694 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z @ 0x180094424 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180094FB8 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800B16F4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801017C8 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // r14
  int AttachedChannel; // eax
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rdi
  CResourceTable **v8; // rbx
  __int64 *v9; // rbx
  char v10; // r8
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rdx
  CMILRefCountBase *v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v17);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xCCAu);
  }
  else
  {
    v6 = *((_QWORD *)this + 63);
    v7 = 0LL;
    while ( (unsigned int)v7 < *(_DWORD *)(v6 + 22688) )
    {
      if ( **(_DWORD **)(*(_QWORD *)(v6 + 22664) + 8 * v7) == (_DWORD)v2 )
        CAnimationTracking::DeleteScenario((CAnimationTracking *)(v6 + 22664), v7);
      else
        v7 = (unsigned int)(v7 + 1);
    }
    v8 = (CResourceTable **)v17;
    if ( *((_BYTE *)v17 + 48) )
    {
      *((_BYTE *)v17 + 48) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 408, &v17) )
      CMILRefCountBase::Release((CMILRefCountBase *)v8);
    CResourceTable::ReleaseHandleTableEntries(v8[3], this);
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
    v9 = (__int64 *)((char *)this + 272);
    v10 = 0;
    *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v2) = 0LL;
    v11 = *((_DWORD *)this + 74);
    if ( v11 )
    {
      do
      {
        if ( *(_QWORD *)(*v9 + 8LL * (unsigned int)(*((_DWORD *)this + 74) - 1)) )
          break;
        v12 = *((_DWORD *)this + 74);
        v13 = (unsigned int)(v11 - 1);
        if ( (unsigned int)v13 >= v12 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v14 = *v9;
          if ( (unsigned int)v13 < v12 - 1 )
          {
            do
            {
              v16 = (unsigned int)(v13 + 1);
              *(_QWORD *)(v14 + 8 * v13) = *(_QWORD *)(v14 + 8 * v16);
              v13 = v16;
            }
            while ( (unsigned int)v16 < *((_DWORD *)this + 74) - 1 );
          }
          --*((_DWORD *)this + 74);
        }
        v11 = *((_DWORD *)this + 74);
        v10 = 1;
      }
      while ( v11 );
      if ( v10 )
        DynArrayImpl<1>::ShrinkToSize((char *)this + 272);
    }
  }
  return v5;
}
