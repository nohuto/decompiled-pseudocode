/*
 * XREFs of WriteSystemMem @ 0x1C001DFF0
 * Callers:
 *     AccessBaseField @ 0x1C001CA40 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C001DF54 (WriteBuffField.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

void __fastcall WriteSystemMem(unsigned __int64 Src, size_t Size, __int64 a3, __int64 a4)
{
  size_t v4; // rsi
  __int64 v6; // rcx
  bool v9; // r14
  int v10; // esi
  int v11; // esi
  int v12; // esi
  __int64 v13; // rdx
  int (__fastcall *v14)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v15; // rax
  _BYTE *v16; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 Srca; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v20[10]; // [rsp+40h] [rbp-49h] BYREF

  v20[8] = -1LL;
  v4 = (unsigned int)Size;
  v20[0] = 0LL;
  v6 = 0LL;
  Srca = 0LL;
  v20[1] = 255LL;
  v20[2] = 0xFFFFLL;
  v20[3] = 0LL;
  v20[4] = 0xFFFFFFFFLL;
  memset(&v20[5], 0, 24);
  if ( (unsigned int)Size > 8 )
    return;
  v9 = a4 == v20[(unsigned int)Size];
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v13 = PmHalDispatchTable;
    v14 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
    if ( v14 )
    {
      if ( !v9 )
      {
        if ( v14(0LL, Src, &Srca, (unsigned int)v4, v19) < 0 )
        {
LABEL_26:
          v6 = Srca;
          goto LABEL_3;
        }
        v6 = Srca;
        v13 = PmHalDispatchTable;
      }
      v15 = v6 & ~a4;
      v16 = v19;
      Srca = a3 | v15;
      LOBYTE(v16) = 1;
      if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(v13 + 144))(
             v16,
             Src,
             &Srca,
             (unsigned int)v4,
             v19) >= 0 )
        return;
      goto LABEL_26;
    }
  }
LABEL_3:
  if ( Src % (unsigned int)v4 )
  {
    if ( !v9 )
    {
      memmove(&Srca, (const void *)Src, v4);
      v6 = Srca;
    }
    Srca = a3 | v6 & ~a4;
    memmove((void *)Src, &Srca, v4);
  }
  else
  {
    v10 = v4 - 1;
    if ( !v10 )
    {
      if ( !v9 )
        v6 = *(unsigned __int8 *)Src;
      Srca = a3 | v6 & ~a4;
      *(_BYTE *)Src = Srca;
LABEL_8:
      _InterlockedOr(v17, 0);
      return;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( !v9 )
        v6 = *(unsigned __int16 *)Src;
      Srca = a3 | v6 & ~a4;
      *(_WORD *)Src = Srca;
      goto LABEL_8;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( !v9 )
        v6 = *(unsigned int *)Src;
      Srca = a3 | v6 & ~a4;
      *(_DWORD *)Src = Srca;
      goto LABEL_8;
    }
    if ( v12 == 4 )
    {
      if ( !v9 )
        v6 = *(_QWORD *)Src;
      Srca = a3 | v6 & ~a4;
      *(_QWORD *)Src = Srca;
      KeFlushWriteBuffer();
    }
  }
}
