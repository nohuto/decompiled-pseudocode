/*
 * XREFs of ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017D0C0
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0181F10 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0181FD0 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C006F948 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenLocalMutex(unsigned int *a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int *v6; // rsi
  DXGGLOBAL *v7; // rcx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax

  v4 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 11000);
  DXGGLOBAL::GetGlobal((__int64)a1);
  v5 = 3 * v4;
  v6 = &a1[2 * v5];
  v9 = DXGGLOBAL::OpenKeyedMutex(v7, *a1, (struct DXGKEYEDMUTEX **)&a1[2 * v5 + 8], v6 + 6, 0LL, 0);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&a1[2 * v5 + 10] = PsGetCurrentProcess(v8);
    v11 = v6[6];
    Current = DXGPROCESS::GetCurrent(v12);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
    v14 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)Current + 56) )
    {
      v15 = *((_QWORD *)Current + 26);
      v16 = v14;
      v17 = ((unsigned int)v11 >> 26) & 0x30;
      if ( (((unsigned int)v11 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16 * v16 + 8) & 0x30)
        && (*(_DWORD *)(v15 + 16 * v16 + 8) & 0xF) != 0 )
      {
        v18 = 2 * ((v11 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v15 + 8 * v18 + 8) & 0x1000) == 0 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v19 + 24) = 193LL;
          WdLogEvent5_WdAssertion(v19);
        }
        *(_DWORD *)(*((_QWORD *)Current + 26) + 8 * v18 + 8) &= ~0x1000u;
      }
    }
    *((_QWORD *)Current + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v10, 11000);
  return (unsigned int)v9;
}
