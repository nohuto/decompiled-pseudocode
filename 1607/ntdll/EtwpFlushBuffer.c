/*
 * XREFs of EtwpFlushBuffer @ 0x180052EB4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x180052C60 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1800FD694 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpWriteBufferCompressed @ 0x180002558 (EtwpWriteBufferCompressed.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // r9d
  NTSTATUS v5; // edx
  int v8; // eax
  int v9; // esi
  int v10; // r8d
  __int64 v11; // r14
  __int64 Length; // rbp
  int v13; // ecx
  unsigned __int64 v14; // r11
  NTSTATUS v16; // eax
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v21 = 0;
  v22 = 0;
  v8 = *(_DWORD *)(a2 + 4);
  if ( !v8 )
  {
    v8 = *(_DWORD *)(a2 + 8);
    v4 = v21;
  }
  *(_DWORD *)(a2 + 48) = v8;
  v9 = 1;
  if ( v8 == 72 && a3 != 1 )
    return (unsigned int)-2147483614;
  if ( *(_QWORD *)(a1 + 144) )
  {
    v10 = *(_DWORD *)(a1 + 324);
    v11 = *(unsigned int *)(a1 + 320);
    Length = *(unsigned int *)(a1 + 208);
    v13 = 0;
    if ( (v10 & 8) != 0 )
      v13 = 2;
    if ( (_DWORD)v11 )
    {
      v14 = (v10 & 0x4000000) != 0 ? *(_QWORD *)(a1 + 360) : Length * (unsigned int)(v13 + *(_DWORD *)(a1 + 336));
      if ( v14 >= ((v10 & 0x2000) != 0 ? 1024 : 0x100000) * v11 )
      {
        v17 = (v10 & 0xB) - 1;
        if ( !v17 )
        {
          v5 = -1073741432;
LABEL_33:
          *(_DWORD *)(a1 + 388) += v4;
          if ( (*(_DWORD *)(a1 + 324) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * *(unsigned __int16 *)(a2 + 42) + 8) += v4;
          return (unsigned int)v5;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 6 )
            *(_DWORD *)(a1 + 332) |= 1u;
        }
        else
        {
          v19 = *(_QWORD *)(a1 + 352);
          *(_QWORD *)(a1 + 360) = v19;
          *(_DWORD *)(a1 + 336) = v19 / Length;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    *(_QWORD *)(a2 + 16) = MEMORY[0x7FFE0014];
    if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    {
      v16 = EtwpWriteBufferCompressed(a1, (_OWORD *)a2, &v22, &v21);
      v4 = v21;
      v5 = v16;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 48) < (unsigned int)Length )
        memset((void *)(a2 + *(unsigned int *)(a2 + 48)), 255, (unsigned int)(Length - *(_DWORD *)(a2 + 48)));
      v5 = NtWriteFile(
             *(HANDLE *)(a1 + 144),
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             (PVOID)a2,
             Length,
             (PLARGE_INTEGER)(a1 + 360),
             0LL);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 360) += Length;
        v4 = v21;
LABEL_16:
        if ( v5 >= 0 )
        {
          *(_DWORD *)(a1 + 392) += v9;
          *(_DWORD *)(a1 + 336) += v9;
          if ( (*(_DWORD *)(a1 + 324) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12LL * *(unsigned __int16 *)(a2 + 42)) += v9;
          return (unsigned int)v5;
        }
        if ( v5 == -2147483614 )
          return (unsigned int)v5;
        goto LABEL_33;
      }
      v4 = 1;
    }
    v9 = v22;
    goto LABEL_16;
  }
  return (unsigned int)v5;
}
