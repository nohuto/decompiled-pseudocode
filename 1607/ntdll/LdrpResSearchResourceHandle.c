/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800DD4C0
 * Callers:
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 * Callees:
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381DC (LdrpResSearchResourceInsideDirectory.c)
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800DD040 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800DD404 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800DDAF0 (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        int a2,
        _QWORD *a3,
        int a4,
        unsigned __int64 *a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // bx
  unsigned __int64 v10; // r12
  __int64 result; // rax
  int File; // edi
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned __int16 v15; // cx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  __int64 Heap; // rax
  _DWORD *v19; // rbx
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int64 v22; // r15
  _DWORD *v23; // r15
  __int64 v24; // r14
  _WORD *v25; // r13
  int v26; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v27; // [rsp+74h] [rbp-4C4h] BYREF
  int v28; // [rsp+78h] [rbp-4C0h]
  int v29; // [rsp+7Ch] [rbp-4BCh]
  int v30; // [rsp+80h] [rbp-4B8h]
  __int64 v31; // [rsp+88h] [rbp-4B0h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp-4A8h]
  _QWORD v33[2]; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-490h]
  unsigned __int64 *v35; // [rsp+B0h] [rbp-488h]
  __int64 v36; // [rsp+B8h] [rbp-480h]
  void *v37; // [rsp+C0h] [rbp-478h]
  int v38; // [rsp+C8h] [rbp-470h] BYREF
  const wchar_t *v39; // [rsp+D0h] [rbp-468h]
  _BYTE v40[2]; // [rsp+D8h] [rbp-460h] BYREF
  __int16 v41; // [rsp+DAh] [rbp-45Eh]
  _WORD *v42; // [rsp+E0h] [rbp-458h]
  int v43; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v44; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v45; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v46; // [rsp+104h] [rbp-434h]
  __int16 v47; // [rsp+108h] [rbp-430h]
  unsigned int v48; // [rsp+164h] [rbp-3D4h]
  unsigned int v49; // [rsp+174h] [rbp-3C4h]
  unsigned int v50; // [rsp+178h] [rbp-3C0h]
  int v51; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v52; // [rsp+188h] [rbp-3B0h]
  int v53; // [rsp+18Ch] [rbp-3ACh]
  _WORD v54[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v55; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v56[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v29 = a4;
  v32 = a3;
  v8 = a2;
  v28 = a2;
  v35 = a5;
  v34 = a6;
  v37 = a7;
  v36 = a8;
  LODWORD(v33[0]) = 4456514;
  v33[1] = L"LdrpResSearchResourceHandle Enter";
  v38 = 4325440;
  v39 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)v33);
  v10 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_9;
  }
  v30 = v8 & 0x1000;
  result = LdrpResFileSize((__int64)Handle, &v31);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, (__int64)v54, 64);
  if ( (int)result < 0 )
    return result;
  if ( v54[0] != 23117 )
    goto LABEL_8;
  v13 = v55;
  if ( v30 )
  {
    if ( (unsigned __int64)v55 + 264 < v55
      || v55 > 0x10000000
      || v55 + 264 < v55
      || (unsigned __int64)v55 + 264 >= (unsigned int)v31 )
    {
      goto LABEL_8;
    }
  }
  result = LdrpResReadFile(Handle, v55, (__int64)&v43, 264);
  if ( (int)result < 0 )
    return result;
  if ( v43 != 17744 )
    goto LABEL_8;
  if ( v47 != 267 )
  {
    if ( v47 != 523 || v44 != 512 && v44 != -31132 )
      goto LABEL_8;
    if ( v49 > 2 && v53 )
    {
      v15 = v46;
      if ( v46 >= 0x88u )
      {
        v16 = v52;
        goto LABEL_26;
      }
LABEL_8:
      File = -1073741701;
LABEL_9:
      v26 = File;
      goto LABEL_65;
    }
LABEL_22:
    File = -1073741687;
    goto LABEL_9;
  }
  if ( v44 != 332 )
  {
    if ( (unsigned __int16)(v44 - 448) > 4u )
      goto LABEL_8;
    v14 = 21;
    if ( !_bittest(&v14, (unsigned __int16)(v44 - 448)) )
      goto LABEL_8;
  }
  if ( v48 <= 2 || !v51 )
    goto LABEL_22;
  v15 = v46;
  if ( v46 < 0x78u )
    goto LABEL_8;
  v16 = v50;
LABEL_26:
  if ( !v16 )
    return 3221225609LL;
  if ( !v45 )
    goto LABEL_8;
  v17 = 40 * v45;
  if ( v13 + v17 + v15 + 24 > (unsigned int)v31 )
    goto LABEL_8;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
  v10 = Heap;
  v33[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    goto LABEL_9;
  }
  File = LdrpResReadFile(Handle, v13 + v46 + 24, Heap, v17);
  v26 = File;
  if ( File < 0 )
    goto LABEL_65;
  v19 = (_DWORD *)v10;
  v20 = 0;
  if ( v45 )
  {
    do
    {
      v21 = v19[3];
      if ( v16 >= v21 && v16 < v19[4] + v21 )
        break;
      v19 += 10;
      ++v20;
    }
    while ( v20 < v45 );
  }
  if ( v20 >= v45 )
    goto LABEL_8;
  v22 = v16 + (unsigned int)v19[5] - (unsigned __int64)(unsigned int)v19[3];
  if ( v22 )
  {
    File = LdrpResSetFilePointer(Handle, v22);
    v26 = File;
    if ( File >= 0 )
    {
      if ( v29 == 3 )
      {
        v56[0] = 0;
        if ( (v28 & 0x20) != 0 )
        {
          v56[0] = 1;
          v56[2] = 0;
        }
        else
        {
          File = LdrResFallbackLangList(0LL, 0, *((_WORD *)v32 + 8), v28, v56);
          v26 = File;
          if ( File < 0 && v30 )
            goto LABEL_65;
        }
      }
      v27 = 0;
      File = LdrpResSearchResourceInsideDirectory(
               0LL,
               Handle,
               (unsigned int)v31,
               v22,
               (__int64)&v43,
               (__int64)v19,
               v32,
               v29,
               (__int64)v56,
               v35,
               v34,
               v28,
               &v27);
      v26 = File;
      if ( File >= 0 )
      {
        v23 = (_DWORD *)v36;
        if ( v36 )
        {
          if ( v27 )
          {
            v42 = Src;
            v41 = 172;
            File = RtlLcidToLocaleName(v27, (__int64)v40, 2, 0);
            v26 = File;
            if ( File < 0 )
              goto LABEL_65;
            v24 = -1LL;
            do
              ++v24;
            while ( Src[v24] );
          }
          else
          {
            Src[0] = 0;
            LODWORD(v24) = 0;
          }
          if ( (unsigned int)v24 < *v23 && (v25 = v37) != 0LL )
          {
            memmove(v37, Src, 2LL * (unsigned int)v24);
            *v23 = v24 + 1;
            v25[(unsigned int)v24] = 0;
          }
          else
          {
            *v23 = v24 + 1;
            File = -1073741789;
            v26 = -1073741789;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741701;
    v26 = -1073741701;
  }
LABEL_65:
  if ( v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    File = v26;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v38);
  return (unsigned int)File;
}
