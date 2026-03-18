/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18003B930
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C (-DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180116D28 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18003935C (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18003AD28 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18003B8E4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800A0B34 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180117140 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // r14
  int AttachedChannel; // eax
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rdi
  CResourceTable **v8; // rbx
  struct CComposition *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  char v14; // r8
  __int64 *v16; // rbx
  __int64 v17; // rdx
  struct CChannelContext *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v18);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xB96u);
  }
  else
  {
    v6 = *((_QWORD *)this + 64);
    v7 = 0LL;
    while ( (unsigned int)v7 < *(_DWORD *)(v6 + 22312) )
    {
      if ( **(_DWORD **)(*(_QWORD *)(v6 + 22288) + 8 * v7) == (_DWORD)v2 )
        CAnimationTracking::DeleteScenario((CAnimationTracking *)(v6 + 22288), v7);
      else
        v7 = (unsigned int)(v7 + 1);
    }
    v8 = (CResourceTable **)v18;
    if ( *((_BYTE *)v18 + 48) )
    {
      *((_BYTE *)v18 + 48) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)this + 51, (__int64 *)&v18) )
      CMILRefCountBase::Release((CMILRefCountBase *)v8);
    CResourceTable::ReleaseHandleTableEntries(v8[3], v9, (struct CChannelContext *)v8);
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
    v16 = (__int64 *)((char *)this + 272);
    v14 = 0;
    *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v2) = 0LL;
    v13 = *((_DWORD *)this + 74);
    if ( v13 )
    {
      do
      {
        if ( *(_QWORD *)(*v16 + 8LL * (unsigned int)(*((_DWORD *)this + 74) - 1)) )
          break;
        v10 = *((_DWORD *)this + 74);
        v11 = (unsigned int)(v13 - 1);
        if ( (unsigned int)v11 >= v10 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v12 = *v16;
          if ( (unsigned int)v11 < v10 - 1 )
          {
            do
            {
              v17 = (unsigned int)(v11 + 1);
              *(_QWORD *)(v12 + 8 * v11) = *(_QWORD *)(v12 + 8 * v17);
              v11 = v17;
            }
            while ( (unsigned int)v17 < *((_DWORD *)this + 74) - 1 );
          }
          --*((_DWORD *)this + 74);
        }
        v13 = *((_DWORD *)this + 74);
        v14 = 1;
      }
      while ( v13 );
      if ( v14 )
        DynArrayImpl<1>::ShrinkToSize((char *)this + 272);
    }
  }
  return v5;
}
