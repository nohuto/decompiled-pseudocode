/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C630 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800E3158 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800519D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18005F5B8 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180064798 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z @ 0x18006CE60 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1800E3D20 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
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
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  CMILRefCountBase *v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v17);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xC73u);
  }
  else
  {
    v6 = *((_QWORD *)this + 63);
    v7 = 0LL;
    while ( (unsigned int)v7 < *(_DWORD *)(v6 + 22680) )
    {
      if ( **(_DWORD **)(*(_QWORD *)(v6 + 22656) + 8 * v7) == (_DWORD)v2 )
        CAnimationTracking::DeleteScenario((CAnimationTracking *)(v6 + 22656), v7);
      else
        v7 = (unsigned int)(v7 + 1);
    }
    v8 = (CResourceTable **)v17;
    if ( *((_BYTE *)v17 + 48) )
    {
      *((_BYTE *)v17 + 48) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)this + 51, (__int64 *)&v17) )
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
        v13 = *((_DWORD *)this + 74);
        v14 = (unsigned int)(v11 - 1);
        if ( (unsigned int)v14 >= v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v15 = *v9;
          if ( (unsigned int)v14 < v13 - 1 )
          {
            do
            {
              v16 = (unsigned int)(v14 + 1);
              *(_QWORD *)(v15 + 8 * v14) = *(_QWORD *)(v15 + 8 * v16);
              v14 = v16;
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
        DynArrayImpl<1>::ShrinkToSize((__int64 *)this + 34);
    }
  }
  return v5;
}
