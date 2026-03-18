/*
 * XREFs of ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0028378
 * Callers:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0028218 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 * Callees:
 *     cjCopyFontDataW @ 0x1C0028D7C (cjCopyFontDataW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C014D274 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall EFSOBJ::WriteEFE(EFSOBJ *this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  __int64 *v6; // r9
  char *v7; // r12
  BOOL v8; // r15d
  int v9; // edi
  __int64 v10; // rcx
  char v11; // cl
  void *v12; // rax
  const void *v13; // rsi
  unsigned int Size; // [rsp+90h] [rbp+18h]
  __int64 Sizea; // [rsp+90h] [rbp+18h]

  *(_DWORD *)(*(_QWORD *)this + 64LL) += *(_DWORD *)(*(_QWORD *)a3 + 72LL);
  v6 = *(__int64 **)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 72LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
      return;
    }
    if ( v6[5] + 8 > (unsigned __int64)v6[6] && !(unsigned int)EFSOBJ::bGrow(this) )
    {
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 14;
      return;
    }
    **(_QWORD **)(*(_QWORD *)this + 40LL) = *(_QWORD *)a2;
    *(_QWORD *)(*(_QWORD *)this + 40LL) += 8LL;
    v7 = 0LL;
    v8 = 0;
    v9 = 1;
    v10 = **(_QWORD **)this;
    if ( v10 )
    {
      v7 = **(char ***)this;
      if ( (*((_BYTE *)a2 + 4) & 2) == 0 )
      {
        v8 = (*(_BYTE *)(v10 + 129) & 1) == 0;
        v9 = *(unsigned __int8 *)(v10 + 128);
LABEL_10:
        Size = *(_DWORD *)(*(_QWORD *)a3 + 72LL);
        v12 = (void *)AllocFreeTmpBuffer(Size);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, Size);
          Sizea = cjCopyFontDataW(*(_QWORD *)(*(_QWORD *)this + 32LL), v13, a3, *(unsigned int *)a2, v7, v9, v8);
          memmove(*(void **)(*(_QWORD *)this + 16LL), v13, Sizea);
          FreeTmpBuffer(v13);
          *(_QWORD *)(*(_QWORD *)this + 16LL) += Sizea;
          *(_DWORD *)(*(_QWORD *)this + 24LL) -= Sizea;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)this + 28LL) = 8;
        }
        return;
      }
    }
    else
    {
      v11 = *((_BYTE *)a2 + 4);
      if ( (v11 & 1) != 0 )
        v7 = (char *)gpfsTable + 196 * *((unsigned __int16 *)a2 + 3);
      if ( (v11 & 2) == 0 )
        goto LABEL_10;
    }
    v8 = 1;
    v9 = *((unsigned __int8 *)a2 + 5);
    goto LABEL_10;
  }
}
