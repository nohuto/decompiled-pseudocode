/*
 * XREFs of WriteSystemMem @ 0x1C0017FA0
 * Callers:
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C0017F14 (WriteBuffField.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

void __fastcall WriteSystemMem(unsigned __int64 Src, size_t Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  size_t v8; // r14
  signed __int32 v9[8]; // [rsp+0h] [rbp-59h] BYREF
  _QWORD Srca[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h]
  __int64 v12; // [rsp+38h] [rbp-21h]
  __int64 v13; // [rsp+40h] [rbp-19h]
  __int64 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+50h] [rbp-9h]
  _QWORD v16[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v17; // [rsp+70h] [rbp+17h]

  v17 = -1LL;
  v11 = 0LL;
  v12 = 255LL;
  v5 = 0LL;
  Srca[0] = 0LL;
  v13 = 0xFFFFLL;
  v14 = 0LL;
  v15 = 0xFFFFFFFFLL;
  memset(v16, 0, sizeof(v16));
  if ( (unsigned int)Size <= 8 )
  {
    v8 = (unsigned int)Size;
    if ( Src % (unsigned int)Size )
    {
      if ( a4 != *(&v11 + (unsigned int)Size) )
      {
        memmove(Srca, (const void *)Src, (unsigned int)Size);
        v5 = Srca[0];
      }
      Srca[0] = a3 | v5 & ~a4;
      memmove((void *)Src, Srca, v8);
    }
    else
    {
      switch ( (_DWORD)Size )
      {
        case 1:
          if ( a4 != v12 )
            v5 = *(unsigned __int8 *)Src;
          Srca[0] = a3 | v5 & ~a4;
          *(_BYTE *)Src = Srca[0];
LABEL_7:
          _InterlockedOr(v9, 0);
          return;
        case 2:
          if ( a4 != v13 )
            v5 = *(unsigned __int16 *)Src;
          Srca[0] = a3 | v5 & ~a4;
          *(_WORD *)Src = Srca[0];
          goto LABEL_7;
        case 4:
          if ( a4 != v15 )
            v5 = *(unsigned int *)Src;
          Srca[0] = a3 | v5 & ~a4;
          *(_DWORD *)Src = Srca[0];
          goto LABEL_7;
        case 8:
          if ( a4 != v17 )
            v5 = *(_QWORD *)Src;
          *(_QWORD *)Src = a3 | v5 & ~a4;
          KeFlushWriteBuffer();
          break;
      }
    }
  }
}
