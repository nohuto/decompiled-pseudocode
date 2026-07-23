/*
 * XREFs of EtwpFlushBuffer @ 0x180009AB4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x180009858 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1800F4044 (EtwpBufferingModeFlush.c)
 * Callees:
 *     NtWriteFile @ 0x180093980 (NtWriteFile.c)
 *     memset @ 0x180098540 (memset.c)
 *     EtwpWriteBufferCompressed @ 0x1800F52A0 (EtwpWriteBufferCompressed.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // r9d
  NTSTATUS v5; // edx
  int v8; // eax
  int v9; // esi
  int v10; // r8d
  __int64 v11; // r14
  int v12; // ecx
  __int64 Length; // rbp
  unsigned __int64 v14; // r11
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rax
  NTSTATUS v19; // eax
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
    v10 = *(_DWORD *)(a1 + 332);
    v11 = *(unsigned int *)(a1 + 328);
    v12 = 0;
    Length = *(unsigned int *)(a1 + 208);
    if ( (v10 & 8) != 0 )
      v12 = 2;
    if ( (_DWORD)v11 )
    {
      v14 = (v10 & 0x4000000) != 0 ? *(_QWORD *)(a1 + 368) : Length * (unsigned int)(v12 + *(_DWORD *)(a1 + 344));
      if ( v14 >= ((v10 & 0x2000) != 0 ? 1024 : 0x100000) * v11 )
      {
        v16 = (v10 & 0xB) - 1;
        if ( !v16 )
        {
          v5 = -1073741432;
LABEL_33:
          *(_DWORD *)(a1 + 396) += v4;
          if ( (*(_DWORD *)(a1 + 332) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 520) + 12LL * *(unsigned __int16 *)(a2 + 42) + 8) += v4;
          return (unsigned int)v5;
        }
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 6 )
            *(_DWORD *)(a1 + 340) |= 1u;
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 360);
          *(_QWORD *)(a1 + 368) = v18;
          *(_DWORD *)(a1 + 344) = v18 / Length;
        }
      }
    }
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    *(_QWORD *)(a2 + 16) = MEMORY[0x7FFE0014];
    if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
    {
      v19 = EtwpWriteBufferCompressed(a1, a2, &v22, &v21);
      v4 = v21;
      v5 = v19;
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
             (PLARGE_INTEGER)(a1 + 368),
             0LL);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 368) += Length;
        v4 = v21;
LABEL_16:
        if ( v5 >= 0 )
        {
          *(_DWORD *)(a1 + 400) += v9;
          *(_DWORD *)(a1 + 344) += v9;
          if ( (*(_DWORD *)(a1 + 332) & 0x10000) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 520) + 12LL * *(unsigned __int16 *)(a2 + 42)) += v9;
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
