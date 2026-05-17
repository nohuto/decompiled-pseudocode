/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800D5110
 * Callers:
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18003839C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x18003A1E8 (LdrResFallbackLangList.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800D4C90 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800D5054 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800D5748 (LdrpResSetFilePointer.c)
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
  bool v11; // di
  __int64 result; // rax
  int File; // edi
  unsigned int v14; // ebx
  int v15; // ecx
  unsigned __int16 v16; // cx
  unsigned int v17; // r14d
  unsigned int v18; // edi
  __int64 Heap; // rax
  _DWORD *v20; // rbx
  int v21; // edx
  unsigned int v22; // ecx
  unsigned __int64 v23; // r15
  _DWORD *v24; // r15
  __int64 v25; // r14
  _WORD *v26; // r13
  int v27; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v28; // [rsp+74h] [rbp-4C4h] BYREF
  int v29; // [rsp+78h] [rbp-4C0h]
  int v30; // [rsp+7Ch] [rbp-4BCh]
  __int64 v31; // [rsp+80h] [rbp-4B8h] BYREF
  int v32; // [rsp+88h] [rbp-4B0h]
  _QWORD *v33; // [rsp+90h] [rbp-4A8h]
  _QWORD v34[2]; // [rsp+98h] [rbp-4A0h] BYREF
  unsigned __int64 *v35; // [rsp+A8h] [rbp-490h]
  void *v36; // [rsp+B0h] [rbp-488h]
  __int64 v37; // [rsp+B8h] [rbp-480h]
  __int64 v38; // [rsp+C0h] [rbp-478h]
  int v39; // [rsp+C8h] [rbp-470h] BYREF
  const wchar_t *v40; // [rsp+D0h] [rbp-468h]
  _BYTE v41[2]; // [rsp+D8h] [rbp-460h] BYREF
  __int16 v42; // [rsp+DAh] [rbp-45Eh]
  _WORD *v43; // [rsp+E0h] [rbp-458h]
  int v44; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v45; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v46; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v47; // [rsp+104h] [rbp-434h]
  __int16 v48; // [rsp+108h] [rbp-430h]
  unsigned int v49; // [rsp+164h] [rbp-3D4h]
  unsigned int v50; // [rsp+174h] [rbp-3C4h]
  unsigned int v51; // [rsp+178h] [rbp-3C0h]
  int v52; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v53; // [rsp+188h] [rbp-3B0h]
  int v54; // [rsp+18Ch] [rbp-3ACh]
  _WORD v55[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v56; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v57[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v29 = a4;
  v33 = a3;
  v8 = a2;
  v30 = a2;
  v35 = a5;
  v37 = a6;
  v36 = a7;
  v38 = a8;
  LODWORD(v34[0]) = 4456514;
  v34[1] = L"LdrpResSearchResourceHandle Enter";
  v39 = 4325440;
  v40 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 172);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)v34);
  v10 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_9;
  }
  v32 = v8 & 0x1000;
  v11 = v32 != 0;
  result = LdrpResFileSize((__int64)Handle, &v31);
  if ( (int)result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, (__int64)v55, 64);
  if ( (int)result < 0 )
    return result;
  if ( v55[0] != 23117 )
    goto LABEL_8;
  v14 = v56;
  if ( v11
    && ((unsigned __int64)v56 + 264 < v56
     || v56 > 0x10000000
     || v56 + 264 < v56
     || (unsigned __int64)v56 + 264 >= (unsigned int)v31) )
  {
    goto LABEL_8;
  }
  result = LdrpResReadFile(Handle, v56, (__int64)&v44, 264);
  if ( (int)result < 0 )
    return result;
  if ( v44 != 17744 )
    goto LABEL_8;
  if ( v48 != 267 )
  {
    if ( v48 != 523 || v45 != 512 && v45 != -31132 )
      goto LABEL_8;
    if ( v50 > 2 && v54 )
    {
      v16 = v47;
      if ( v47 >= 0x88u )
      {
        v17 = v53;
        goto LABEL_26;
      }
LABEL_8:
      File = -1073741701;
LABEL_9:
      v27 = File;
      goto LABEL_65;
    }
LABEL_22:
    File = -1073741687;
    goto LABEL_9;
  }
  if ( v45 != 332 )
  {
    if ( (unsigned __int16)(v45 - 448) > 4u )
      goto LABEL_8;
    v15 = 21;
    if ( !_bittest(&v15, (unsigned __int16)(v45 - 448)) )
      goto LABEL_8;
  }
  if ( v49 <= 2 || !v52 )
    goto LABEL_22;
  v16 = v47;
  if ( v47 < 0x78u )
    goto LABEL_8;
  v17 = v51;
LABEL_26:
  if ( !v17 )
    return 3221225609LL;
  if ( !v46 )
    goto LABEL_8;
  v18 = 40 * v46;
  if ( v14 + v18 + v16 + 24 > (unsigned int)v31 )
    goto LABEL_8;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
  v10 = Heap;
  v34[0] = Heap;
  if ( !Heap )
  {
    File = -1073741801;
    goto LABEL_9;
  }
  File = LdrpResReadFile(Handle, v14 + v47 + 24, Heap, v18);
  v27 = File;
  if ( File < 0 )
    goto LABEL_65;
  v20 = (_DWORD *)v10;
  v21 = 0;
  if ( v46 )
  {
    do
    {
      v22 = v20[3];
      if ( v17 >= v22 && v17 < v20[4] + v22 )
        break;
      v20 += 10;
      ++v21;
    }
    while ( v21 < v46 );
  }
  if ( v21 >= v46 )
    goto LABEL_8;
  v23 = v17 + (unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3];
  if ( v23 )
  {
    File = LdrpResSetFilePointer(Handle, v23);
    v27 = File;
    if ( File >= 0 )
    {
      if ( v29 == 3 )
      {
        v57[0] = 0;
        if ( (v30 & 0x20) != 0 )
        {
          v57[0] = 1;
          v57[2] = 0;
        }
        else
        {
          File = LdrResFallbackLangList(0LL, 0LL, *((unsigned __int16 *)v33 + 8), v30, v57);
          v27 = File;
          if ( File < 0 && v32 )
            goto LABEL_65;
        }
      }
      v28 = 0;
      File = LdrpResSearchResourceInsideDirectory(
               0LL,
               Handle,
               (unsigned int)v31,
               v23,
               (__int64)&v44,
               (__int64)v20,
               v33,
               v29,
               (__int64)v57,
               v35,
               v37,
               v30,
               &v28);
      v27 = File;
      if ( File >= 0 )
      {
        v24 = (_DWORD *)v38;
        if ( v38 )
        {
          if ( v28 )
          {
            v43 = Src;
            v42 = 172;
            File = RtlLcidToLocaleName(v28, (__int64)v41, 2, 0);
            v27 = File;
            if ( File < 0 )
              goto LABEL_65;
            v25 = -1LL;
            do
              ++v25;
            while ( Src[v25] );
          }
          else
          {
            Src[0] = 0;
            LODWORD(v25) = 0;
          }
          if ( (unsigned int)v25 < *v24 && (v26 = v36) != 0LL )
          {
            memmove(v36, Src, 2LL * (unsigned int)v25);
            *v24 = v25 + 1;
            v26[(unsigned int)v25] = 0;
          }
          else
          {
            *v24 = v25 + 1;
            File = -1073741789;
            v27 = -1073741789;
          }
        }
      }
    }
  }
  else
  {
    File = -1073741701;
    v27 = -1073741701;
  }
LABEL_65:
  if ( v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    File = v27;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v39);
  return (unsigned int)File;
}
