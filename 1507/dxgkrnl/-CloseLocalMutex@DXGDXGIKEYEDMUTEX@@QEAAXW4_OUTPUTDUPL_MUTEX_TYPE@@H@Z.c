/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0152974
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0152684 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C015270C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0158324 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01583E4 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005B2E4 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

char __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  bool v6; // zf
  __int64 v7; // rbx
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9

  v3 = a3;
  v4 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 11001);
  v6 = v3 == 0;
  v7 = a1 + 24 * v4;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v6 )
  {
    LOBYTE(v9) = DXGKEYEDMUTEX::DestroyHandle(v8);
    if ( !(_BYTE)v9 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = 560LL;
LABEL_9:
      LOBYTE(v9) = WdLogEvent5_WdAssertion(v14);
    }
  }
  else
  {
    v9 = DXGKEYEDMUTEX::DestroyLocal(v8);
    if ( v9 < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v15, v12, v16);
      *(_QWORD *)(v14 + 24) = 565LL;
      goto LABEL_9;
    }
  }
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    LOBYTE(v9) = Template_q(v11, &EventProfilerExit, v12, 11001);
  return v9;
}
