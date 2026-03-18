/*
 * XREFs of ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0158324
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C008E350 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0152974 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01541C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01585B8 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerPosition(
        unsigned int **this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rcx
  int updated; // ebx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  const struct _DXGKARG_SETPOINTERPOSITION *v14; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1965LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this[*((unsigned int *)this + 11) + 6], 2LL, a3, a4);
    if ( updated >= 0 )
    {
      v11 = 0LL;
      v13 = 0LL;
      v10 = 1;
      v14 = a2;
      v12 = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
                  (OUTPUTDUPL_CONTEXT *)this,
                  (struct _OUTPUTDUPL_UPDATE_INFO *)&v10);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex((__int64)this[*((unsigned int *)this + 11) + 6], 2, 0LL);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = this[*((unsigned int *)this + 11) + 6];
      *(_QWORD *)(v9 + 32) = this;
      WdLogEvent5_WdError(v9);
    }
    return (unsigned int)updated;
  }
}
